#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    cin>>k;
   
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0,val=arr[k-1];
    for(int i=0;i<n;i++){
        if(arr[i]>=val && arr[i]>0)
        ans++;
    }
    cout<<ans;
return 0;
}