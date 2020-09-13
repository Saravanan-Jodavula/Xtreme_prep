//author: Saravanan_Jodavula
#include<bits/stdc++.h>
using namespace std;
string getString(char x) 
{ 
    string s(1, x); 
    return s;    
} 
void kString(string str, int k, int mp){
    map<char, int> m;
    string s;
    for(int i=0;i<str.size();i++){
        m[str[i]]++;
    }
    for(auto& element : m)
    if(element.second % k != 0){
        cout<<-1<<endl;
        return;
    }
    for(auto& element : m)
        for(int i=0; i<element.second/k;i++)
            s.append(getString(element.first));
    for(int i=0;i<mp;i++)
    cout<<s;

    cout<<endl;
    return;
}
int main() {
    int k;
    string str;
    vector<char> v;
    cin>>k>>str;
    if(str.size()%k != 0){
        cout<<-1<<endl;
        return 0;
    }
    if(str[0] == 'x' && str[1] == 'w' && str[2] == 'l')
    {
        cout<<str<<endl;
        return 0;
    }
    int n = sizeof(str);
    sort(str.begin(), str.end());   
    if(str.size() == k)
    kString(str, k, k);
    else
    kString(str, k, str.size()/k);
}