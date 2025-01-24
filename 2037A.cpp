#include<bits/stdc++.h>
using namespace std;
 
int main(){
     int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
    unordered_map<int,int>m;
    for(auto i: a)
    {
        m[i]++;
    }
    int count=0;
    for(auto i: m)
    {
        count+=i.second/2;
    }
    cout<<count<<endl;
    }
    return 0;
}
