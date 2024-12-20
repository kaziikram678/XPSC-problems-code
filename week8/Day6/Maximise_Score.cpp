#include<bits/stdc++.h>>
using namespace std;
#define ll long long
#define cy cout<<"YES"<<endl
#define cy cout<<"NO"<<endl
#define cv for(ll i=0;i<n;i++) cout<<v[i]<<" "
#define cl cout<<endl

int main()
{
    ll tt;
    cin>>tt;

    while(tt--)
    {
        ll n,m;
        cin>>n;

        vector<ll> v(n), diff(v);

        for(ll i=0;i<n;i++) cin>>v[i];

        //p_sum[0] = v[0];

        for(ll i=0;i<n-1;i++)
        {
            diff[i] = abs(v[i]-v[i+1]);
        }

        ll ans = INT_MAX;

        if(n>=2)
        {
            ans = min(diff[0],ans);
        }

        if(n>=2)
        {
            ans = min(diff[n-2],ans);
        }

        for(int i=1;i<n-1;i++)
        {
            ll max_diff = max(diff[i-1],diff[i]);
            ans = min(ans, max_diff);
        }

        cout<<ans<<endl;





    }


}