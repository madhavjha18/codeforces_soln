#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        const int mod = 1e9 + 7;
        int n;
        cin>>n;
        vector<int>arr1(n);
        vector<int>arr2(n);
        for(int i = 0;i<n;i++) cin>>arr1[i];
        for(int i = 0;i<n;i++) cin>>arr2[i];
	    
	    sort(arr1.begin(),arr1.end());
	    sort(arr2.begin(),arr2.end());
	    
	    long long ans = 1;
	    int count = 0;
	    int j = n-1;
	    for(int i = n-1;i>=0;i--){
	        while(j>=0 && arr1[j] > arr2[i]){
	            j--;
	            count++;
	        }
	        
	        ans = (ans*count) % mod;
	        count--;
	    }
	    cout<<ans<<endl;
    }
    return 0;
}
