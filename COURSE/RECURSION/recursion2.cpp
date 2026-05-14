#include <bits/stdc++.h>
using namespace std;
int tilingproblem(int n){
    if(n==0||n==1){
        return 1;
    }
    //vertical placement
    //horizontal placement
    return tilingproblem(n-1)+tilingproblem(n-2);
}

void removeduplicate(string s, int i, string ans,int count[50]){
    char ch=s[i];
    if(i==s.length()){
        cout<<ans<<endl;
        return;
    }
    int countidx=ch-'a';
    if (count[countidx]){
        removeduplicate(s,i+1,ans,count);
    }
    else{
        count[countidx]=true;
        removeduplicate(s,i+1,ans+s[i],count);
    }
    
}

int friendspairing(int n){
    if(n==1||n==2){
        return n;
    }
    //single
    int p1=friendspairing(n-1);
    //pair
    int p2=(n-1)*friendspairing(n-2);
    return p1+p2;
}

void printbinary(int n, string ans,int lastplace){
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    if(lastplace==0){
        printbinary(n-1,ans+"1",1);
    }    
    printbinary(n-1,ans+"0",0);

}

int main(){
    int n=4;
    cout<<tilingproblem(n)<<endl;
    string s="appnnacollege";
    int count[50]={false};
    removeduplicate(s,0,"",count);
    cout<<friendspairing(3)<<endl;
    printbinary(3,"",0);
    return 0;
}