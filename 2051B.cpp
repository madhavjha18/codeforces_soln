#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int km;
        cin>>km;
        vector<int>a(3);
        for(int i=0;i<3;i++)
        {
            int x;
            cin>>x;
            a[i]=x;}
        int count=0;
        int sum=0;
        int sumall=accumulate(a.begin(),a.end(),0);
        if(sumall<=km) {
            int k=km/sumall;
            sum=k*sumall;
            count=3*k;
        }
        for(int i=0;i<3;i++)
        {
            if(sum>=km)
            break;
            sum+=a[i];
            count++;             
        }
        cout<<count<<endl;
    }
    return 0;
}
