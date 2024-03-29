//Codeforces Round 937 (Div. 4), problem: (D) Product of Binary Decimals
/* VIMAL'S TEMPLATE
    date:28-03-24*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define loop(n,i) for (auto i = 0; i < n; i++)
#define print(a) for (auto i:a)cout<<i<<" ";cout<<endl;
#define input(a,n) vector<int> a(n);for(int i=0;i<n;i++)cin>>a[i];
bool isbinary(int n){
    while(n>0){
        if(n%10!=1 and n%10 !=0)return false;
        n/=10;
    }
    return true;
}
 
int main(){
    int t;
    cin>>t;
    // unordered_set<int> st;
    vector<int> st={1,10,11,100,101,110,111,121,1000,1001,1010,1011,1100,1101,1110,1111,1210,1221,1331,10000,10001,10010,
10011,10100,10101,10110,10111,10201,11000,11001,11010,11011,11100,11101,11110,11111,11121,11211,12100,12111,12210,12221,
12321,13310,13431,14641,100000};
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<"yes\n";
            continue;
            
        }
        int sz=st.size(),b=0;
        for(int i=0;i<sz;){
            if(n==st[i]){
                b=1;
                break;
            }
            i++;
        }
        if(b)std::cout << "yes" << std::endl;
        else cout << "no" << std::endl;
        
    }
}