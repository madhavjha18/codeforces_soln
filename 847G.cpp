#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int n;
   cin>>n;
   vector<string>s(n);
   for(int i=0;i<n;i++)
   {
     cin>>s[i];
   }
   int ans=INT_MIN;
  for(int i=0;i<7;i++)
  {
    int count=0;
    for(int j=0;j<n;j++)
    {
      if(s[j][i]=='1')
      count++;
    }
    ans=max(count,ans);
  }
  cout<<ans;
    return 0;
}
