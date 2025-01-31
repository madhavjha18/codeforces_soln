#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t;
  cin>>t;
  while(t--){
    int m;
    cin>>m;
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int count=0;
    if(m>=a)
    count+=a;
    else
    count+=m;
     if(m>=b)
    count+=b;
    else
    count+=m;
    if((m*2)>=count+c)
    count+=c;
    else
    {
      int temp=(m*2)-count;
      count+=temp;
    }
    cout<<count<<endl;
  }
    return 0;
}
