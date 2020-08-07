//author: saravanan_jodavula
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,ans(0);
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]<0){
            ans+=a[i];
            m--;
        }
        if(m == 0)
            break;
    }
    cout<<abs(ans)<<endl;
    return 0;
}