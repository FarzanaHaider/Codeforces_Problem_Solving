#include<bits/stdc++.h>
using namespace std;
# define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n;
    cin>>n;
    vector<int>v(n);
    map<int , int>cnt;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        cnt[v[i]]++;
    }
    int m=0;
    for(int i=0;i<n;i++)
    {
        m=max(m,cnt[v[i]]);
    }
    cout<<m;
}
