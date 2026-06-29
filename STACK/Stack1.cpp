#include <bits/stdc++.h>
using namespace std;

// create stack using vector
class Stack{
    vector<int>vec;
public:
    void push(int val){
        vec.push_back(val);
    }
    void pop(){
        if(isEmpty()){
            cout<<"stack is empty.\n";
            return;
        }
        vec.pop_back();
    }
    int top(){
        int lastIdx= vec.size()-1;
        return vec[lastIdx];
    }
    bool isEmpty(){
        return vec.size()==0;
    }
};

// create stack using vector with template 
template<class T>
class NStack{
    vector<T>vec;
public:
    void push(T val){
        vec.push_back(val);
    }
    void pop(){
        if(isEmpty()){
            cout<<"stack is empty.\n";
            return;
        }
        vec.pop_back();
    }
    T top(){
        int lastIdx= vec.size()-1;
        return vec[lastIdx];
    }
    bool isEmpty(){
        return vec.size()==0;
    }
};

void pushatbottom(stack<int>& s4, int val){
    if(s4.empty()){
        s4.push(val);
        return;
    }
    int temp =s4.top();
    s4.pop();
    pushatbottom(s4, val);
    s4.push(temp);
}

void ReverseString(string str){
    string ans;
    stack<char> s5;
    
    for(int i=0; i<str.size(); i++){
        s5.push(str[i]);
    }
    while(!s5.empty()){
        char top=s5.top();
        ans+=top;
        s5.pop();
    }
    cout<<ans<<"\n";
}

void ReverseStack(stack<int>& s6){
    stack<int> temp;
    while(!s6.empty()){
        int top=s6.top();
        temp.push(top);
        s6.pop();
    }
    s6=temp; 
}

void validparanthesis(string str){
    stack<char> s;
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        if(ch=='(' || ch=='{' || ch=='['){
            s.push(ch);
        }
        else{
            if(!s.empty()){
                char top=s.top();
                if((ch==')' && top=='(') || (ch=='}' && top=='{') || (ch==']' && top=='[')){
                    s.pop();
                }
                else{
                    cout<<"not valid paranthesis.\n";
                    return;
                }
            }
            else{
                cout<<"not valid paranthesis.\n";
                return;
            }
        }
    }
    if(!s.empty()){
        cout<<"not valid paranthesis.\n";
        return;
    }
    cout<<"valid paranthesis.\n";
}

bool duplicateparanthesis(string str) {
    stack<char> s;
    for (char ch : str) {
        if (ch != ')') {
            s.push(ch);
        } else {
            // If stack is empty, the expression is invalid – but we'll treat it as no duplicate.
            if (s.empty()) return false;

            // If top is '(' immediately, we have an empty pair -> duplicate.
            if (s.top() == '(') {
                return true;
            }

            // Otherwise, pop until we find '('
            while (!s.empty() && s.top() != '(') {
                s.pop();
            }
            // Pop the '(' itself (if present)
            if (!s.empty()) {
                s.pop();
            }
        }
    }
    return false;
} 

int MaxAreaHistogram(vector<int> height){
    int n=height.size();
    vector<int>nsl(n), nsr(n);
    stack<int> s;

    //next smaller left
    nsl[0]=-1;
    s.push(0);
    for(int i=1;i<height.size();i++){
        int curr=height[i]; 
        while(!s.empty() && curr<=height[s.top()]){
            s.pop();
        }
        if(s.empty()){
            nsl[i]=-1;
        }
        else{
            nsl[i]=s.top();
        }
        s.push(i);
    }
    while(!s.empty()){
        s.pop();
    }

    //next smaller right
    int n=height.size();
    s.push(n-1);
    nsr[n-1]=n;
    for(int i=n-2;i>=0;i--){
        int curr=height[i];
        while(!s.empty()&& curr<=height[s.top()]){
            s.pop();
        }
        nsr[i]=s.empty()?n:s.top();
        s.push(i);
    }

    int maxArea=0;
    for(int i=0;i<n;i++){
        int width=nsr[i]-nsl[i]-1;
        int area=width*height[i];
        maxArea=max(maxArea,area);
    }
    return maxArea;
}

int main(){     
    cout<<"stack of template class: \n";
    NStack<char> s1;

    s1.push('c');
    s1.push('b');
    s1.push('a');
    while(!s1.isEmpty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<"\n";

    cout<<"stack of class: \n";
    Stack s2;

    s2.push(3);
    s2.push(2);
    s2.push(1);
    while(!s2.isEmpty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<"\n";

    cout<<"stack of STL: \n";
    stack<int> s3;
    s3.push(3); 
    s3.push(2);
    s3.push(1);
    while(!s3.empty()){
        cout<<s3.top()<<" ";
        s3.pop();
    }
    cout<<"\n";

    cout<<"push at bottom of stack: \n";
    stack<int> s4;
    s4.push(1);
    s4.push(2);
    s4.push(3);
    pushatbottom(s4, 11);
    while(!s4.empty()){
        cout<<s4.top()<<" ";
        s4.pop();
    }
    cout<<"\n";

    cout<<"reverse string using stack: \n";
    string str="Ambulance";
    ReverseString(str);

    cout<<"reverse stack using stack: \n";
    stack<int> s6;
    s6.push(1);
    s6.push(2);
    s6.push(3);
    ReverseStack(s6);
    while(!s6.empty()){
        cout<<s6.top()<<" ";
        s6.pop();
    }
    cout<<"\n";

    cout<<"VALID paranthesis using stack: \n";
    string str1="(())))";
    string str2="({[]})";
    validparanthesis(str1);
    validparanthesis(str2);

    cout<<"DUPLICATE paranthesis using stack: \n";
    string str3="((a+b))";
    string str4="((a+b)+(c+d))";
    if(duplicateparanthesis(str3)){
        cout<<"duplicate paranthesis.\n";
    }
    else{
        cout<<"not duplicate paranthesis.\n";
    }
    if(duplicateparanthesis(str4)){
        cout<<"duplicate paranthesis.\n";
    }
    else{
        cout<<"not duplicate paranthesis.\n";
    }

    cout<<"Maximum area in histogram: "<<MaxAreaHistogram({2,1,5,6,2,3})<<endl;

    return 0;
}