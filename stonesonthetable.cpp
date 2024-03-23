#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,remove=0;
    cin>>n;
    string st;
    cin>>st;
    for(int i=0;i<st.size()-1;i++){
        if(st[i]==st[i+1])remove++;
    }
    cout<<remove;
}