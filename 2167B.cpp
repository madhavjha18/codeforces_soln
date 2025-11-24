#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s,t;
        cin>>n;
        cin>>s>>t;
        if(s.length() != t.length()) 
        {
            cout<<"NO"<<endl;
            continue;
        }
        bool printed = false;
        unordered_map<char,int>mp;
        for(auto &i : s){
            mp[i]++;
        }
        for(int i =0;i<t.length();i++){
            if(mp.find(t[i]) == mp.end()){
                cout<<"NO"<<endl;
                printed = true;
                break;
            }
            else{
                if(mp[t[i]]>0) mp[t[i]]--;
                else{
                cout<<"NO"<<endl;
                printed = true;
                break;

            }
            }
            
        }
        if(!printed)
        cout<<"YES"<<endl;
    }
    return 0;
}
