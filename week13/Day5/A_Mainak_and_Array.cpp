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
        ll n;
        cin >> n;

        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];

        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            ll max1 = 0;

            auto mx = *max_element(v.begin() + 1, v.end());
            max1 = mx - v[0];

            auto mn = *min_element(v.begin(), v.end() - 1);
            max1 = max(max1, v[n - 1] - mn);

            for (int i = 0; i < n - 1; i++)
            {
                max1 = max(max1, v[i] - v[i + 1]);
            }

            cout << max1 << endl;
        }
    }
}
