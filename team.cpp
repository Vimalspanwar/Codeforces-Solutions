#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    while (n--)
    {
        short p,v,t;
        cin>>p>>v>>t;
        if((p==1 and v==1)or(v==1 and t==1)or (t==1 and p==1))ans++;
    }
    cout<<ans;
}
    
    
