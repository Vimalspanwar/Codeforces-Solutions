//A. Favorite Sequence
#include<bits/stdc++.h>
using namespace std;
void sequence(int arr[],int n){
    int a2[n];
    int i=0,l=0,r=n-1;
    while(i<n){
        if(i%2==0){
            a2[i++]=arr[l];
            l++;
        }
        else{
            a2[i++]=arr[r];
            r--;
        }
        
    }
    for(int i=0;i<n;i++){
        arr[i]=a2[i];
    }
}
int main(){
    int t;
    cin>>t;
   while (t--)
   {
        int n;
        cin>>n;
        int arr[n];
        int i=0;
        while (i<n)
        {
            cin>>arr[i];
            i++;
        }
        sequence(arr,n);
        for (int  i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
   }
   
}