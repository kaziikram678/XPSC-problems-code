#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    
    ll n,k;
    cin>>n>>k;

    vector<ll> v;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }

    ll l = 0;
    ll r = 0;
    ll sum = 0;
    ll ans = 0;
    while(r<n)
    {
        sum += v[r];

        if(sum<=k)
        {
            ans = max(ans,r-l+1);
        }
        else
        {
            sum-=v[l];
            l++;
        }

        r++;
    }
    cout<<ans<<endl;
    return 0;
}