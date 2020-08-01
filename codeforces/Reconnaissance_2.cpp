//Author: Saravanan_Jodavula
#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    vector<pair<int, int>> v;
    pair<int, int> ans;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(make_pair(a, i+1));
    }
    v.push_back(v[0]);
    int min = v[1].first - v[0].first;
    ans = make_pair(v[0].second, v[1].second);
    for (int i=0; i<n; i++) {
        if(abs(v[i+1].first-v[i].first) < min) {
            min  = v[i+1].first-v[i].first;
            ans = make_pair(v[i].second, v[i+1].second);
        }
    }
    cout<<ans.first<<" "<<ans.second<<endl;
    return 0;
}