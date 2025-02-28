#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

bool cmp(const pair<int,int> &p1,const pair<int,int> &p2)
{
    if(p1.first>p2.first)return 1;
    else if (p1.first == p2.first)return (p1.second<p2.second);
    return 0;
}

int main()
{
    optimize();
    int n,k;
    int s=0;
    cin>>n>>k;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }

    sort(v.begin(),v.end(),cmp);
    for(auto u:v)
    {
        if (u == v[k-1])
            s++;
    }
    cout<<s<<endl;
}
