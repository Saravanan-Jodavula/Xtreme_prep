//Author: Saravanan_Jodavula
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,sum = 0, fiveCount = 0, zeroCount=0, buffer=0;
    bool doesZeroExist = false;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] == 0){
            doesZeroExist = true;
            zeroCount++;
        }
        else {
            sum += a[i];
            ++fiveCount;
            if(sum%9 == 0)
                buffer = fiveCount;
        } 
    }
    if(doesZeroExist == false){
        cout<<"-1"<<endl;
        return 0;
    }
    if(buffer == 0){
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<buffer;i++)
        cout<<5;
    for(int i=0;i<zeroCount;i++)
        cout<<0;

}