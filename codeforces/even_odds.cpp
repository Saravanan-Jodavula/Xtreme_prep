//Author: Saravanan Jodavula
#include<bits/stdc++.h>
using namespace std;
int main() {
    long int n,k;
    vector<long int> v;
    cin>>n>>k;
    for(long int i=1;i<=n;i=i+2)
        v.push_back(i);
    for(long int j=2;j<=n;j=j+2)
        v.push_back(j);
    cout<<v[k-1]<<endl;
    return 0;
}