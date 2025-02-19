#include <bits/stdc++.h>
using namespace std;

void toL(string &s){
  transform(s.begin(), s.end(), s.begin(), ::tolower);
}
int main() 
{
  string s1,s2;
  cin>>s1;
  cin>>s2;
  toL(s1);
  toL(s2);
  if(s1<s2)
  cout<<"-1"<<endl;
  else if(s1>s2)
  cout<<"1"<<endl;
  else
  cout<<"0"<<endl;
  
    return 0;
}
