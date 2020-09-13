#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c=0;
    cin>>n>>a>>b;
    int k = n-b;
    for(int i=a+1;i<n;i++){
        if(i >= (k-1))
            c++;
    } 
    cout<<c<<endl;
}