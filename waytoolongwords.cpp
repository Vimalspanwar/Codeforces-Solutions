#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
        string st;
        cin>>st;
        int l=st.size();
        if(l>10){
            cout<<st[0]<<l-2<<st[l-1]<<endl;
        }
        else cout<<st<<endl;
    }

    
}