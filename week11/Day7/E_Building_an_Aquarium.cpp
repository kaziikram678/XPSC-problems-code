#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define cv for(ll i=0;i<n;i++) cout<<v[i]<<" "
#define cl cout<<endl
#define ios ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    ios
    ll tt;
    cin>>tt;

    while(tt--)
    {
        ll n,m;
        cin>>n>>m;

        vector<ll> v(n);

        for(ll i=0;i<n;i++) cin>>v[i];


        sort(v.begin(),v.end());

        auto ok = [&](ll mid)
        {
            ll cnt = 0;
            for(int i=0;i<n;i++)
            {
                if(mid>v[i])
                {
                    cnt += mid - v[i];
                }
                else break;
            }

            return cnt<=m;

        };

        ll l =1, r = 2e9, ans=0, mid = 0;

        while(l<=r)
        {
            mid = l+(r-l)/2;

            if(ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }

        cout<<ans<<endl;
    }


}