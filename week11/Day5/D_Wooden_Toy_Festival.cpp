#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define cv                     \
    for (ll i = 0; i < n; i++) \
    cout << v[i] << " "
#define cl cout << endl
#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    ios
        ll tt;
    cin >> tt;

    while (tt--)
    {
        ll n, m;
        cin >> n;

        vector<ll> v(n);

        for (ll i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        auto ok = [&](ll mid)
        {
            ll l = 0, cnt = 1;
            for (int i = 0; i < n; i++)
            {
                if (v[i] - v[l] > 2 * mid)
                {
                    cnt++;
                    l = i;
                }
            }
            return cnt <= 3;
        };

        ll l = 0, r = 1e9, ans = 0;

        while (l <= r)
        {
            ll mid = l + (r - l) / 2;

            if (ok(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }

        cout << ans << endl;
    }
}