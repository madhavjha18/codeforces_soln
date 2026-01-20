#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        string ans = arr[0];
        for(int i = 1;i<n;i++){
            ans = min(ans+arr[i],arr[i]+ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}