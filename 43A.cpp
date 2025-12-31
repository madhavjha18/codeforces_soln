#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	unordered_map<string,int>mp;
	
	for(int i = 0;i<n;i++){
	    string x;
	    cin>>x;
	    mp[x]++;
	}
	string ans;
	int goal = 0;
	for(auto &[u,v] : mp){
	    if(v > goal){
	        goal = v;
	        ans = u;
	    }
	}
	cout<<ans;
}
