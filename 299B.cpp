#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   int i=0;
   while(i<n-1)
   {
     int t=i;
     for(int j=min(n-1,i+k);j>i;j--){
        if (s[j] == '.') {
                t = j;
                break; 
        }
     }
     if(i==t){
        cout << "NO";
        return 0;
     }
     i=t;
   }
   cout << "YES";
   
    return 0;
}
