#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int x=0;
    while(n--){
        string s;
        cin>>s;
        if(s[0]=='+' or s[2]=='+')x++;
        if(s[0]=='-' or s[2]=='-')x--;
    }
    cout<<x;
}