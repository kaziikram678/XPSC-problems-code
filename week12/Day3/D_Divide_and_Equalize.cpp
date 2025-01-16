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

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            for (int j = 2; j * j <= v[i]; j++)
            {
                while (v[i] % j == 0)
                {
                    mp[j]++;
                    v[i] /= j;
                }
            }
            if (v[i] > 1)
            {
                mp[v[i]]++;
            }
        }
        int f = 0;
        for (auto it : mp)
        {
            if (it.second % n != 0)
            {
                f = 1;
                break;
            }
        }

        if (f == 1)
            cn;
        else
            cy;
    }
}