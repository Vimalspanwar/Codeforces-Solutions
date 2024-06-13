#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef unsigned long long ull;
typedef long double lld;
#define mod 1000000007
#define  vi vector<int>
#define pb push_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define FOR(i,a,b) for (auto i = a; i < b; i++)
#define loop(i,n) for (auto i = 0; i < n; i++)
#define print(a) for (auto i:a)cout<<i<<" ";cout<<endl;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x) ; cerr<< endl;
#else
#define debug(x)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;cerr<< endl;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
void _print(vector<int> v) {cerr << "[ "; for(int i=0; i<v.size(); i++) { _print(v[i]); cerr << " "; } cerr << "]";}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

int main() {
    // Enable debugger
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    #endif
 
    // Your code here
  int t;
  cin >> t;
  
  while(t--){
    int n;
    cin>>n;
    vi a(n);
    vector<ll> ps(n);
    loop(i,n)
        cin>>a[i];

    map<ll,int> mp;
    // mp[0]=1;
    // ps[0]=a[0];
    // FOR(i,1,n){
    //     ps[i]=ps[i-1]+a[i];
    // }
    int ans=0,hf;
    ll p=0;
    loop(i,n){
       mp[a[i]]++;
       p+=a[i];
       auto it =mp.rbegin();
       ll maxe= it->first;
       if(p-maxe==maxe)ans++;
    }
    if(n==1 and a[0]!=0)ans=0;
    cout<<ans<<endl;
    // print(ps)
    // cout<<"##########\n";
  }
}