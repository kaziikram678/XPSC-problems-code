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

        vector<ll> v(n + 5);

        for (ll i = 0; i < n; i++)
            cin >> v[i];

        int b = 30;

        vector<int> cnt(31);

        for (int i = 0; i < n; i++)
        {
            for (int k = b; k >= 0; k--)
            {
                if ((v[i] >> k) & 1)
                    cnt[k]++;
            }
        }

        ll ans = 0;
        for (int i = b; i >= 0; i--)
        {
            if (cnt[i] == n)
            {
                ans += (1LL << i);
            }
            else
            {
                int need = n - cnt[i];

                if (need <= m)
                {
                    ans += (1LL << i);
                    m -= need;
                }
            }
        }
        cout << ans << endl;
    }
}