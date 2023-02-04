//https://codeforces.com/contest/1768/problem/B

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,c=0,ans;
        cin>>n>>k;
        vector<long long int> v;
        for(int i=0;i<n;i++) 
        {
            long long int x;
            cin>>x;
            v.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]==c+1)
            {
                c++;
            }
        }
        ans=n-c;
        if(ans%k==0)
        {
            cout<<ans/k<<endl;
        }
        else{
            cout<<(ans/k)+1<<endl;
        }
    }
 
    return 0;
}
