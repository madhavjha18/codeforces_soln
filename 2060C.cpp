#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int num;
      cin>>num;
      vector<int>a(n);
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      sort(a.begin(),a.end());
      int start=0;
      int end=n-1;
      int count=0;
      while(start<end)
      {
        if(a[start]+a[end]==num)
        {
          count++;
          start++;
          end--;
        }
        else if(a[start]+a[end]<num)
        start++;
        else
        end--;
      }
      cout<<count<<endl;
    }
    return 0;
}
