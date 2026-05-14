#include <bits/stdc++.h>
using namespace std;


// int main (){
//     char arr[5]={'a','b','c','d','e'};
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<"\n";f
//     }
// }


// int main (){
//     char arr[5];
//     cin >>arr;
//     cout<<"your word is "<<arr<<"\n";
//     cout<<"the length of your word is "<<strlen(arr)<<"\n";
//     return 0;
// }


// int main (){
//     char sentence[30];
//     cin.getline(sentence,30, "*");
//     cout<<"your sentence is "<<sentence<<"\n";
//     cout<<"the length of your sentence is "<<strlen(sentence)<<"\n";
//     return 0;
// }


void toUpper( char word[], int n){
    for(int i=0;i<n;i++){
        char ch=word[i];
        if(ch>='A' && ch<='Z'){
            continue;
        }
        else if(ch>='a' && ch<='z'){
            word[i]=ch-'a'+'A';
        }
    }
}


void ReverseCharArray(char arr[], int n){
    int st=0, end=n-1;
    while(st<end){
        swap(arr[st], arr[end]);
        st++;
        end--;
    }
}


bool Palindrome(char arr[], int n){
    int st=0, end=n-1;
    while(st<end){
        if(arr[st]!=arr[end]){
            cout<<"Not a palindrome\n";
            return false;
        }
        st++;
        end--;
    }
    cout<<"Palindrome\n";
    return true;
}
    

int main (){
    string str;
    getline(cin, str, '*');
    cout<<"your sentence is "<<str<<"\n";
    cout<<"the length of your sentence is "<<str.length()<<"\n";
    
}


int main(){
    
}