#include <bits/stdc++.h> 
using namespace std; 
void subsetsUtil(vector<long long int>& A, vector<long long int>& res, 
                 vector<long long int>& subset, long long int index) 
{   
    res.push_back(accumulate(subset.begin(), subset.end(), 0));
    // cout<<"sum is"<<accumulate(subset.begin(), subset.end(), 0)<<endl;
    for (int i = index; i < A.size(); i++) { 
        subset.push_back(A[i]); 
        subsetsUtil(A, res, subset, i + 1); 
        subset.pop_back(); 
    } 
    return; 
} 
  
vector<long long int> subsets(vector<long long int>& A) 
{ 
    vector<long long int> subset; 
    vector<long long int> res; 
    long long int index = 0; 
    subsetsUtil(A, res, subset, index); 
    return res; 
} 
  
int main() 
{ 
    int T;
    cin>>T;
    while(T--){
            int N;
            long long int k;
            cin>>N;
            vector<long long int> array;
            for(int i=0; i<N; i++){
                cin>>k;
                array.push_back(k);
            }
            long long int sum = 0;
            vector<long long int> res = subsets(array); 
            vector<long long int> sums;
            for (int i = 0; i < res.size(); i++) { 
                if(res[i] & 1 == 1)   
                    sum = sum + res[i];
                else
                    continue;
            } 
            cout<<sum<<endl;
    }
    return 0; 
} 