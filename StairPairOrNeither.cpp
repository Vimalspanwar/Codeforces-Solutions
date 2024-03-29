//Codeforces Round 937 (Div. 4), problem: (A) Stair, Peak, or Neither?
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
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b and b<c)std::cout << "STAIR" << std::endl;
        else if(a<b and b>c)std::cout << "PEAK" << std::endl;
        else std::cout << "NONE" << std::endl;
    }
}