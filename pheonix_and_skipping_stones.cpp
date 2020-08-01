#include<bits/stdc++.h>
using namespace std;
pair<int, int> sizeOfSubstring(pair<int,int> a, int arr[]) {
    int count1 = 0, count2 = 0, firstOccurence1, lastOccurence1, firstOccurence2, lastOccurence2;
    int a1 = a.second;
    for(int i = 0; i < sizeof(arr);  i++){
            if(arr[i] == a1){
                firstOccurence1 = i;
                break;    
            }
    }
    for(int i = 0; i < sizeof(arr);  i++){
            if(arr[i] == a1){
                lastOccurence1 = i;
                break;    
            }
    }
    int answ1 = lastOccurence1 - firstOccurence1;
    return make_pair(answ1, a1);
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int N, moD, moDchar, answ;
        vector<pair<int, int>> v, ansv;
        cin>>N;
        int a[N], b[N];
        for(int i=0;i<N;i++){
            char ch;
            cin>>ch;
            a[i] = int(ch);
            b[i] = int(ch);
        }
        sort(a,a+N);
        int count=0;
        for(int i=0;i<N-1;i++){
            if(a[i] = a[i+1]){
                ++count;
            }
            else{
                v.push_back( make_pair(count, a[i]) );
                count = 0;
            }
        }
        sort(v.begin(), v.end());
        for(int i = v.size(); i>=0; i--){
            if(v[i].first == v[i-1].first){
                ansv.push_back(sizeOfSubstring(v[i], b));
                ansv.push_back(sizeOfSubstring(v[i-1], b));
            }
        }
        sort(ansv.begin(), ansv.end());
        cout<<ansv[0].first<<" "<<ansv[0].second<<endl;
    }
    return 0;
}