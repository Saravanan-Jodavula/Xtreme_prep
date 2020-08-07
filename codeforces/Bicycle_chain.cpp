//author: Saravanan_Jodavula   
#include<bits/stdc++.h>
using namespace std;
int main () {
    int n,m;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
        cin>>a[i];
     cin>>m;
     int b[m];
     for(int i=0;i<m;i++)
        cin>>b[i];
    int maxRatio = 0, ans=0;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if((b[i]%a[j] == 0) && (b[i]/a[j] > maxRatio)){
                maxRatio = b[i]/a[j];
            }
        }
     }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if((b[i]%a[j] == 0) && b[i]/a[j] == maxRatio){
                ans++;
            }
        }
     }
     cout<<ans<<endl;
     return 0;
}