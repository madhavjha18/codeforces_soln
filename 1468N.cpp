#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--){
    int c1,c2,c3;
    int a1,a2,a3,a4,a5;
    cin>>c1;
    cin>>c2;
    cin>>c3;
    cin>>a1;
    cin>>a2;
    cin>>a3;
    cin>>a4;
    cin>>a5;
    if(c1<a1 || c2<a2 || c3<a3)
    {
      cout<<"NO"<<endl;
      continue;
    }
    else
    {
      c1=c1-a1;
      c2=c2-a2;
      c3=c3-a3;
    }
   if(a4>=c1)
   {
     a4=a4-c1;
   }
   else
   a4=0;
   if(a5>=c2)
   {
     a5=a5-c2;
   }
   else
   a5=0;
   if(a4+a5>c3)
   {
      cout<<"NO"<<endl;
      continue;
    }
    cout<<"YES"<<endl;
  }
   
    return 0;
}