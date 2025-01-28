#include<bits/stdc++.h>
using namespace std;

int divide(int x,int &count){
    if(x==0) return 0;
    if(x%2==0)
   { 
       if(count==0)
       {
           count++;
       }
       x/=2;
       
    return divide(x,count);
       
   }
    else
    return x;
  
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    unordered_multiset<int>s;
    for(int i=0;i<n;i++){
        int z;
        cin>>z;
        s.insert(z);
    }
   
    long long k=0;
    int tcount=0;
    while(!s.empty()){
        bool modified=0;
   
    for(auto i=s.begin(); i!=s.end();)
    {
        if((k+*i)%2==0)
        {
        k+=*i;
        
        i=s.erase(i);
        modified=1;
        }
        else
        ++i;
        
        int count=0;
       k= divide(k,count);
       tcount+=count;
       
    }
    if(k==0 && !s.empty() && modified==0)
    {
      auto l=s.begin();
      k=*l;
      s.erase(l);
      modified=1;
    }
    
    if(!modified) break;
   
    }
   
    
    
    cout<<tcount<<endl;
}
return 0;
}
