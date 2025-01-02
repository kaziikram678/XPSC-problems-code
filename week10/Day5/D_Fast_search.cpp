#include <bits/stdc++.h>>
using namespace std;
#define ll long long
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define cv                     \
    for (ll i = 0; i < n; i++) \
    cout << v[i] << " "
#define cl cout << endl
#define all v.begin(), v.end()

int main()
{

    ll n, m;
    cin >> n;

    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
        cin >> v[i];

    sort(all);

    cin >> m;
    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        ll l = 0;
        ll r = n - 1;
        ll ans = -1;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;

            if (v[mid] >= x)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        ll l1 = 0;
        ll r1 = n - 1;
        ll ans2 = -1;
        while (l1 <= r1)
        {
            ll mid = l1 + (r1 - l1) / 2;

            if (v[mid] <= y)
            {
                ans2 = mid;
                l1 = mid + 1;
            }
            else
            {
                r1 = mid - 1;
            }
        }

        cout << ans2 - ans + 1 << " ";
    }
}