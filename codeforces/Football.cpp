#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int c = 0;
    bool isDangerous = false;
    cin>>s;
    char temp = s[0];
    for(int i=0;i<s.size();i++){
        if(s[i] == temp){
             c++;
        }
        else{
            c = 0;
            temp = s[i];
        }
        if(abs(c)+1 >= 7){
            cout<<"YES"<<endl;
            return 0;
        }
        if(i>=s.size())
            break;
    }
    cout<<"NO"<<endl;
 return 0;       
}