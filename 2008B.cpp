#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t;
   cin>>t;
   while(t--){
     int n;
     cin>>n;
     string s;
     cin>>s;
     auto d=sqrt(n);
     int k=static_cast<int>(d);
     if(k*k!=n){
       cout<<"NO"<<endl;
       continue;
     }
     vector<vector<char>>c(k,vector<char>(k));
     int l=0;
     for(int i=0;i<k;i++){
       for(int j=0;j<k;j++){
       c[i][j]=s[l];
       l++;
       }
     }
     bool v=true;
     for(int i=1;i<k-1;i++){
       for(int j=1;j<k-1;j++){
        if(c[i][j]=='1')
        v=false;
     }}
     if(v==false)
     cout<<"NO"<<endl;
     else
     cout<<"YES"<<endl;
   }
    return 0;
}