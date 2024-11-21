#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;

        vector<ll> v;
        ll tsum = 0;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
            tsum+=x;
        }

        ll l = 0;
        ll r = 0;
        ll sum = 0;
        ll ans = 0;
        while(r<n)
        {
           sum+=v[r];

           if(sum<=m)
           {
               ans = max(ans,(r-l+1));
           }
           else
           {
                while(sum>m)
                {
                    sum-=v[l];
                    l++;
                }
           }
           r++;
        }
        if(sum<m) cout<<"-1"<<endl;
        else
        cout<<n-ans<<endl;
    }
    return 0;
}