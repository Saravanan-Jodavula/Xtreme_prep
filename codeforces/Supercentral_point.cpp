//author: Saravanan_Jodavula
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b, supercentral=0;
    int x1 = 0, x2 = 0, x3 = 0, x4 = 0;
    vector<pair<int, int>> v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        v.push_back(make_pair(a, b));
    }
    for(int i = 0; i<n;i++) {
        x1 = 0;
        x2 = 0;
        x3 = 0;
        x4 = 0;
         for(int j = 0; j<n;j++) {
                if(v[j].first > v[i].first && v[i].second == v[j].second){
                    x1 = 1;
                }
                else if(v[j].first < v[i].first && v[i].second == v[j].second){
                    x2 = 1;

                }
                else if(v[j].first == v[i].first && v[i].second < v[j].second){
                    x3 = 1;

                }
                else if(v[j].first == v[i].first && v[i].second > v[j].second){
                    x4 = 1;
                }
            }
                if((x1 == 1) && (x2 == 1) && (x3 == 1) && (x4 == 1)) {
                    supercentral++;
                }   
    }
    cout<<supercentral<<endl;
    return 0;
}