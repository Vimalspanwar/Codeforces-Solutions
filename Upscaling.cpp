//Codeforces Round 937 (Div. 4), problem: (B) Upscaling
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
        int n;
        cin>>n;
        n=2*n;
        vector<vector<char>> a;
        vector<char> h,d;
        loop(n/2,i){
            if(i&1){
                h.push_back('.');
                h.push_back('.');
            }
            else{
                h.push_back('#');
                h.push_back('#');
            }
        }
        loop(n/2,i){
            if(i&1){
                d.push_back('#');
                d.push_back('#');
            }
            else{
                d.push_back('.');
                d.push_back('.');
            }
        }
        for(int i=0;i<n/2;i++){
            if(i&1){
                a.push_back(d);
                a.push_back(d);
            }
            else{
                a.push_back(h);
                a.push_back(h);
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout<<a[i][j];
            }
            std::cout <<  std::endl;
        }
    }
}