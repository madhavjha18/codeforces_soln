#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count = 0;
	    int maxi = 0;
	    long long sum = 0;
	    
	    
	    maxi = 0;
	    for(int i = 0;i<n;i++){
	        int x;
	        cin>>x;
	        sum += x;
	        maxi = max(maxi,x);
	        if(sum-maxi == maxi)count++;
	    }
	    cout<<count<<endl;
	}
}
