//Codeforces Round 937 (Div. 4), problem: (C) Clock Conversion
/* VIMAL'S TEMPLATE
    date:28-03-24*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define loop(n,i) for (auto i = 0; i < n; i++)
#define print(a) for (auto i:a)cout<<i<<" ";cout<<endl;
#define input(a,n) vector<int> a(n);for(int i=0;i<n;i++)cin>>a[i];
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int h=0,m=0,n=s.size(),isam=1;
        h=stoi(s.substr(0,2));
        m=stoi(s.substr(3,2));
        string ans="",h1="",m1="";
        if(h>12)isam=0,h-=12;
        else if(h==0)h=12;
        else if(h==12)isam=0;
        if(h<10)h1+='0';
        h1+=to_string(h);
        if(m<10)m1+='0';
        m1+=to_string(m);
        ans+=h1+':'+m1;
        if(isam)ans+=" AM";
        else ans+=" PM";
        cout<<ans<<endl;
    }
}