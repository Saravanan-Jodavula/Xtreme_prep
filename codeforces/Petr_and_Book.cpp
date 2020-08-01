//Author: Saravanan_Jodavula
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,n,it=0,sum=0,ans;
    cin>>n;
    vector<pair<int, int>> v;
    for(int i=0;i<7;i++) {
        cin>>a;
        v.push_back(make_pair(a, i+1));
    }
    while(sum<n) {
        for(int i=0;i<7;i++){
            sum += v[i].first;
            ans = v[i].second;
            if(sum>=n)
                break;
        }
    }
    cout<<ans<<endl;
    return 0;
}