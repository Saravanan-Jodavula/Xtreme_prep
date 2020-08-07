#include<bits/stdc++.h>
using namespace std;
void printWinner(vector<string>& v){
    map<string, int> m;
    for(auto& str : v){
        m[str]++;
    }
    int max = 0;
    string ans;
    for(auto& element : m) {
        if(element.second > max){
            max = element.second;
            ans = element.first;
        }
    }
    cout<<ans<<endl;
}
int main() {
    int n;
    string k;
    vector<string> v;
    cin>>n;
    while(n--){
        cin>>k;
        v.push_back(k);
    }
    printWinner(v);
    return 0;
}