#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  while(n--){
    string s;
    cin>>s;
    string s1;
    if(s.length()<=10)
    {
      cout<<s<<endl;
      continue;
    }
    else{
      int i=s.length()-2;
      s1+=s[0];
      s1+=to_string(i);
      s1+=s[s.length()-1];
      cout<<s1<<endl;
    }
  }
   
    return 0;
}
