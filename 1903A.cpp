
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
  while(t--){
      int box,n;
      cin>>box;
      cin>>n;
      vector<int>arr(box);
      vector<int>copy(box);
      for(int i=0;i<box;i++){
          int temp;
          cin>>temp;
          arr[i]=temp;
          copy[i]=temp;
      }
      sort(copy.begin(),copy.end());
      if(n==1 && copy==arr)
      cout<<"YES"<<endl;
      else
      if(n==1)
      cout<<"NO"<<endl;
      else
      cout<<"YES"<<endl;
      
      
  }
  return 0;
}