//Author: Saravanan_Jodavula
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,a,ans;
    cin>>n;
    vector<pair<int, int>> v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(make_pair(a, i));
    }
    sort(v.begin(), v.end());
    int min = 2147483647;
    for(int i=0;i<n;i++){
        if(v[i].first<=min){
            min = v[i].first;
            ans = v[i].second+1;
            if(v[i].first == v[i-1].first){
                cout<<"Still Rozdil"<<endl;
                return 0;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}