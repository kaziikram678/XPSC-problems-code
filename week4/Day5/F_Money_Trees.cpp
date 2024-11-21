#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        vector<ll> v, vv;
        ll tsum = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
            // tsum+=x;
        }

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            vv.push_back(x);
            // tsum+=x;
        }

        ll l = 0;
        ll r = 0;
        ll sum = 0;
        ll ans = 0;
        while (r < n)
        {
            sum += v[r];

            if ((r<n-1) && (sum <= m) && (vv[r] % vv[r + 1] == 0))
            {
                ans = max(ans, (r - l + 1));
                r++;
            }
            else
            {
                if ((r<n-1) && (vv[r] % vv[r + 1] != 0))
                {
                    if(sum<=m)
                    {
                        ans = max(ans,(r-l+1));

                    }
                    l = r+1;
                    r = l;
                    sum = 0;
                }
                else
                {
                    if(sum<=m)
                    {
                        ans = max(ans,(r-l+1));
                    }
                    sum-=v[l];
                    r++;
                    l++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}