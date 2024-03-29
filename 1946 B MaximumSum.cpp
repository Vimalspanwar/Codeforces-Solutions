#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
typedef long long ll;
using namespace std;

int main()
{
    fastio;
    int t;
    cin>>t;
    while(t--){
        ll n,k,mod=1e9+7,fans=0;
        cin>>n>>k;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            fans+=a[i];
        }
        ll i=0,msum=-1e9,csum=0;
        for(ll i:a){
            csum+=i;
            if(csum<0)csum=0;
            msum=max(msum,csum);
        }
        msum=max(msum,csum);
        msum=msum%mod;
        fans=fans%mod;
        if(fans<0)fans+=mod;
        for(int i=0;i<k;i++){
            fans=(fans+msum)%mod;
            msum=(msum*2)%mod;
        }
        cout<<fans<<endl;
    }
    return 0;
}