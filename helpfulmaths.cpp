#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>ans;
    for(char c:s){
        if(c>='0' and c<='9')ans.push_back(c);
    }
    sort(ans.begin(),ans.end());
    string st="";
    for(int i=0;i<ans.size();i++){
        st.push_back(ans[i]);
        st.push_back('+');
    }
    st.pop_back();
    cout<<st;
}