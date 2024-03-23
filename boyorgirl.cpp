#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int arr[26]={0};
    for(char c:s){
        arr[c-'a']++;

    }
    int count=0;
    for(int i=0;i<26;i++){
        if(arr[i]>0)count++;
    }
    if(count%2!=0)cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";

}   