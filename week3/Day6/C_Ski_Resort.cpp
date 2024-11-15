#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll tt;
    cin >> tt;

    while (tt--)
    {
        ll n, k, q;
        cin >> n >> k >> q;

        vector<ll> v;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }

        ll f = 0;
        ll ans = 0;
        ll cnt = 0;
        ll l = 0;
        ll r = 0;

        while(r<n)
        {
            if(v[r]>q)
            {
                l = r+1;
            }
            else
            {
                if(r-l+1>=k)
                {
                    ans+=(r-l+1)-k+1;
                }
                //cout << ans << endl;
            }
            r++;
        }

        cout << ans << endl;
        
    }
}