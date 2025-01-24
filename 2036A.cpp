#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            if(abs(a[i]-a[i+1])==5 || abs(a[i]-a[i+1])==7 )
            count=1;
            else
            {
            count=0;
            break;
            }
        }
        if(count==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
