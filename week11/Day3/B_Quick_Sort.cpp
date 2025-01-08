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
        cin >> n>>m;

        vector<ll> v(n);

        for (ll i = 0; i < n; i++)
            cin >> v[i];

        ll idx = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == idx + 1) idx++;
        }
        double y = n - idx;
        double x = y / m;
        cout << ceil(x) << endl;
    }
}