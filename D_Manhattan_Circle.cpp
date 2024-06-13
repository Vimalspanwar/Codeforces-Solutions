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
        int n, m;
        cin >> n >> m;
        vector<vector<char>>a(n, vector<char>(m));
        loop(i, n)
        {
            loop(j, m) cin >> a[i][j];
        }

        vector<int> xc, yc;

        loop(i,n)
        {
            loop(j,m)
            {
                if (a[i][j] == '#')
                {
                    xc.pb(i + 1);
                    yc.pb(j + 1);
                }
            }
        }
        sort(xc.begin(),xc.end());
        sort(all(xc));
        sort(all(yc));
        // int xs = 0, ys = 0;
        // for (int x : xc)
        // {
        //     xs += x;
        // }
        // for (int y : yc)
        // {
        //     ys += y;
        // }

        int ansx, ansy;
        int sx = sz(xc);
        int sy = sz(yc);
        ansx = xc[sx / 2];
        ansy = yc[sy / 2];
        cout << ansx << ' ' << ansy << endl;
    }
}
