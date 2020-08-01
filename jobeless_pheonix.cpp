#include<bits/stdc++.h>
using namespace std;
void countJobs (int n) 
{
    int count=0;
        while (n!=0)
        {
            n = n & (n-1);
            count++;
        }
    cout<<count<<endl;
}
 
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int N;
        cin>>N;
        countJobs(N);
    }
    return 0;
}