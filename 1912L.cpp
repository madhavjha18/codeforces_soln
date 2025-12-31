#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   int totalL=0;
   int totalO=0;
   for(char c:s)
   {
     if(c=='L')
     totalL++;
     else
     totalO++;
   }
   int leftL=0,leftO=0;
   for(int i=1;i<n;i++)
   {
     if(s[i-1]=='L')
     leftL++;
     else
     leftO++;
     
     int rightL=totalL-leftL;
     int rightO=totalO-leftO;
     
     if(leftL!=rightL && leftO!=rightO)
     {
     cout<<i<<endl;
     return 0;
    } 
   }
   cout<<"-1"<<endl;
    return 0;
}