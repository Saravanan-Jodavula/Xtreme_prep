//Author: Saravanan_Jodavula
#include<bits/stdc++.h>
using namespace std;
int main () {
    int a1, a2, a3;
    cin>>a1>>a2>>a3;
    int edges = sqrt(a1*a2 / a3) + sqrt(a1*a3 / a2) + sqrt(a3*a2 / a1);
    int ans = edges * 4;
    cout<<ans<<endl;
    return 0;
}