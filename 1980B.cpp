#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t;
   cin>>t;
   while(t--){
    int n,f,k;
    cin>>n;
    cin>>f;
    cin>>k;
    
    vector<int>c(n);
    for(int i=0;i<n;i++){
      cin>>c[i];
    }
    int temp=c[f-1];
    sort(c.rbegin(),c.rend());
    int start =count(c.begin(),c.begin()+k,temp);
    int rest=count(c.begin()+k,c.end(),temp);
    if(k==n)
    {
      cout<<"YES"<<endl;
      continue;
    }
    
    if (start>0 && rest>0)
    {
      cout<<"MAYBE"<<endl;
    }
    else if(start>0){
       cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
   }
    return 0;
}
