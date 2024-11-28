#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        vector<ll> v;

        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }

        ll ans = 0;

        for(ll i=0;i<n;i++)
        {
            ans ^= v[i]; 
        }

        if(n%2==0)
        {
            if(ans==0) cout<<0<<endl;
            else cout<<-1<<endl;
        }
        else cout<<ans<<endl;
    }
    return 0;
}