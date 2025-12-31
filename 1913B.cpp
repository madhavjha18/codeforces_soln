#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
   int t;
   cin>>t;
   while(t--){
       string s;
       cin>>s;
       int count0 = 0,count1 = 0;
       for(auto &i : s){
           if(i == '0') count0++;
           else count1++;
       }
       if(count0 == count1) {
           cout<<0<<endl;
           continue;
       }
       int n = s.length();
       string s1 = s;
       int i = 0,j = 1;
       vector<bool>visited(n,0);
       while(i<n && j<n){
           if(visited[i]) i++;
           if(visited[j]) j++;
           if(j<n && i<n && s1[i] == s1[j]){
               j++;
               continue;
           }
           else if(j<n && i<n && !visited[i] && !visited[j]){
               swap(s1[i],s1[j]);
               visited[i] = 1;
               visited[j] = 1;
               i++,j++;
           }
       }
       
       int count = 0;
       for(int i = 0;i<n;i++){
           if(s[i] == s1[i]){ count = i;
           break;
           };
       }
       cout<<n-count<<endl;
       
   }
    return 0;
}