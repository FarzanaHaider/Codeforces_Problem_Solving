#include<bits/stdc++.h>
using namespace std;
# define optimize() ios_base::sync_with_stdio(0);cin.tie(0);
# define endl '\n'
int main()
{
    map<int,int>cnt;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        cnt[a]++;
    }

    int ans=0;

    for(auto u : cnt)
    {
        if(u.second >= u.first)
            ans+=(u.second-u.first);
        else ans+=u.second;
    }
    cout<<ans<<endl;
}
