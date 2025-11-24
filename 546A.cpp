#include<bits/stdc++.h>
using namespace std;

int main(){
    int cost,money,banana;
    cin>>cost>>money>>banana;
    int k = 1;
    int total = 0;
    for(int i = 1;i<=banana;i++){
        total += k*cost;
        k++;
    }
    if(total <= money) cout<<0;
    else{
        cout<<total - money;
    }

}