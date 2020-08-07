//author: Saravanan_jodavula
#include<bits/stdc++.h>
using namespace std;
int main() {
    int k,a[12],sum(0),ans(0);
    cin>>k;
    for(int i=0;i<12;i++){
        cin>>a[i];
    }
    if(k == 0){
        cout<<0;
        return 0;
    }
    sort(a,a+12);
        for(int i=11;i>=0;i--){
            sum+=a[i];
            ++ans;
            if(sum>=k){
                cout<<ans<<endl;
                return 0;
            }
        }  
        cout<<-1<<endl;
        return 0;  
}