#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t;
   cin>>t;
   while(t--){
     int n;
     cin>>n;
     vector<string>s(n);
     int m;
     cin>>m;
     for(int i=0;i<n;i++)
     {
       cin>>s[i];
     }
     int count=0;
    for(int i=0;i<n;i++){
      string s1=s[i];
      int l=s1.length();
      if(l<=m){
        count++;
      }
      m=m-l;
    }
    cout<<count<<endl;
   }
    return 0;
}
