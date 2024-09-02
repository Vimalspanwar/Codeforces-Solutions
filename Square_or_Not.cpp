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

string solve(string &s){
    int n=sz(s);
    int sqr=sqrt(n);
    

    if(sqr*sqr!=n)
        return "NO";
    int o=0,z=0;
    // cout<<sqr;
    for(char c:s){
        if(c=='0')
            z++;
        else if(c=='1')
            o++;
    }
    ll m=(sqr-2)*(sqr-2);
    // cout<<m<<z;
    ll e=n-sqr;
    if(m==z)
        return "yes";
    return "no";
}

int main() {
    // Enable debugger
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    #endif

    // Your code here    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<solve(s)<<endl;
        
    }
}