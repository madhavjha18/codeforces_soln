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
     string s1="";
     s1+=s;
       reverse(s.begin(),s.end());
      
     if(s<s1)
     {
      s+=s1;
      cout<<s<<endl;
     }
    else
    cout<<s1<<endl;
     
   }
    return 0;
}
