#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    vector<char> v;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(tolower(s[i]) == 'y' || tolower(s[i]) == 'a' || tolower(s[i]) == 'u' || tolower(s[i]) == 'o' || tolower(s[i]) == 'i' || tolower(s[i]) == 'e')
            continue;
        else
            v.push_back(s[i]);
    }
    for(int i=0;i<v.size();i++)
        cout<<'.'<<(char)tolower(v[i]);
    return 0;
}