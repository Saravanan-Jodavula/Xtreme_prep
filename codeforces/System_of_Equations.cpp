//author: saravanan_jodavula
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,k,ans(0);
    cin>>n>>m;
    if(n == 1 && m == 1){
        cout<<2<<endl;
        return 0;
    }
    if(n<m)
        k = m;
    else
        k = n;
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            if((pow(i,2) + j == n) && (i+pow(j,2) == m))
                ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}