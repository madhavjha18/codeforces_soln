
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int j;
    int num=0;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        string s=arr[i];
        j=0;
        while(j<s.length()){
            if(s[j]=='+'){
            num++;
            break;
            }
            else if(s[j]=='-'){
            num--;
            break;
            }
            j++;
        }
    }
    cout<<num;
return 0;
}