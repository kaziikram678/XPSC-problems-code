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
    ll n, m;

    cin >> n >> m;

    ll x = (m - n + 1);

    cy;

    for (ll i = n; i < m; i += 2)
    {
        cout << i << " " << i + 1 << endl;
    }
}