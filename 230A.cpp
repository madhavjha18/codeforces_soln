#include <bits/stdc++.h>
using namespace std;

int main() {
	int s,n;
	cin>>s;
	cin>>n;
	vector<vector<int>>dragon;
	
	for(int i = 0;i<n;i++){
	    int x,y;
	    cin>>x>>y;
	    dragon.push_back({x,y});
	}
	sort(dragon.begin(),dragon.end());
	
	for(int i = 0;i<n;i++){
	    if(s > dragon[i][0]){
	        s+=dragon[i][1];
	    }
	    else{
	        cout<<"NO";
	        return 0;
	    }
	}
	
	cout<<"YES";
	return 0;
}
