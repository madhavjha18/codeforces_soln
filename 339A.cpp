#include <bits/stdc++.h>
using namespace std;

int main() 
{
  string s;
  cin>>s;
  string s1="";
  sort(s.begin(),s.end());
  for(int i=0;i<s.length();i++)
  {
    if(s[i]!='+')
    {
    s1+=s[i];
    if(i<s.length()-1)
    s1+='+';
    }
  }
  cout<<s1<<endl;
    return 0;
}
