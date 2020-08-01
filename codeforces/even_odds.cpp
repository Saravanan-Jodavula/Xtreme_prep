//Author: Saravanan Jodavula
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n(0),k(0), p(0);
    cin>>n>>k;
    if(k%2 == 0 && k==n && k!=1){
        cout<<k<<endl;
        return 0;
    }
    else if(k%2 != 0 && k==n && k!=1){
        cout<<k-1<<endl;
        return 0;
    }

        if(k > (n+1)/2){
            if(n%2==0)
            p = k - (n/2);
            else
            p = k - ((n+1)/2);
            cout<<2*(p)<<endl;
            return 0;
        }
        else{
            cout<<(2*k-1)<<endl;
            return 0;
        }
}
