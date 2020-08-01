//Author: Saravanan_Jodavula
#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin>>str;
    for(int i=0;i<str.size(); i++){
        if(str[i] == '2' || str[i] == '3'|| str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9' || str[i] == '0' || str[0] == '4'){
            cout<<"NO"<<endl;
            return 0;
        }
        else if(str[1] == '4' && str[0]!='1' ){
            cout<<"NO"<<endl;
            return 0;
        }
        else if(str[i] == '4' && str[i+1]=='4' && str[i-1]!='1' ) {
            cout<<"NO"<<endl;
            return 0;
        }

    }
    cout<<"YES"<<endl;
    return 0;
}