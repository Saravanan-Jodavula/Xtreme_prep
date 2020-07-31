//Author: Saravanan_Jodavula
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,k;
    vector<pair<int, int>> v;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>k;
        v.push_back(make_pair(k, i));
    }
    while(v.size() > 1){
        auto it = v.begin();
        int i = 0;
        if(v[i].first > m) {
            v[i].first = v[i].first - m;
            v.push_back(v[i]);
            v.erase(it); 
        }
        else{
            v.erase(it);
        }
    }
    cout<<v[0].second + 1<<endl;
    return 0;
}