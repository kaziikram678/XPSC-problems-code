#include <bits/stdc++.h>>
using namespace std;
#define ll long long
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define cv                     \
    for (ll i = 0; i < n; i++) \
    cout << v[i] << " "
#define cl cout << endl

int main()
{
    ll tt;
    cin >> tt;

    while (tt--)
    {
        ll n, m;
        cin >> n >> m;

        vector<ll> v(n + 1);

        for (ll i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end(), greater<int>());

        vector<ll> pre_s(n);

        pre_s[0] = v[0];

        for (int i = 1; i < n; i++)
        {
            pre_s[i] = pre_s[i - 1] + v[i];
        }

        

        while (m--)
        {
            ll k;

            cin >> k;

            auto it = lower_bound(pre_s.begin(), pre_s.end(), k);

            if (it != pre_s.end())
            {
                ll ans = it - pre_s.begin();
                cout << ans + 1 << endl;
            }
            else
                cout << -1 << endl;
        }
        v.clear();
    }
}