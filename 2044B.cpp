#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t;
   cin>>t;
   while(t--){
     string s;
     cin>>s;
     string s1="";
       int i=0;
     int j=s.length()-1;
     while(i<j){
       swap(s[i],s[j]);
       i++;
       j--;
     }
     for(int i=0;i<s.size();i++)
     {
       if(s[i]=='p')
       s1+='q';
       else if(s[i]=='q')
       s1+='p';
       else
       s1+='w';
     }
     cout<<s1<<endl;
   }
    return 0;
}
