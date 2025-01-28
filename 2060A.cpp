#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--){
    vector<int>a(4,0);
    vector<int>b(4,0);
    for(int i=0;i<4;i++)
    {
      int j;
      cin>>j;
      a[i]=j;
      b[i]=j;
      
    }
    int x=a[2]-a[1];
    a.insert(a.begin()+2,x);
      
    
    int y=b[3]-b[2];
    b.insert(b.begin()+2,y);
    int tcount=0;
     
    for(int i=2;i<5;i++)
    {
      if(b[i]==b[i-1]+b[i-2])
      tcount++;
    }
    int count=0;
    for(int i=2;i<5;i++)
    {
      if(a[i]==a[i-1]+a[i-2])
      count++;
    }
    
    cout<<max(count,tcount)<<endl;
  }
    return 0;
}
