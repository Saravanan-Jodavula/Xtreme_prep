//Author: Saravanan_Jodavula
#include<bits/stdc++.h>
using namespace std;
int previousFibonacci(int n) 
{ 
    double a = n / ((1 + sqrt(5)) / 2.0); 
    return round(a); 
} 
int main() {
    int n,a1,a2,a3,a4;
    cin>>n;
    a1 = previousFibonacci(n);
    a2 = previousFibonacci(a1);
    a3 = previousFibonacci(a2);
    a4 = previousFibonacci(a3);
    if(n < 5){
        int sum = 0;
        while(sum != n){
            sum += 1;
            cout<<1<<" ";
        }
        if(sum<=2){
            for(int i=0;i<(3-sum);i++){
                cout<<0<<" ";
            }
        }
        return 0;
    }
    cout<<a1<<" "<<a3<<" "<<a4<<endl;
    return 0;
}   