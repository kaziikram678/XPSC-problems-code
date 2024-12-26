#include <bits/stdc++.h>>
using namespace std;
#define ll long long
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define cv                     \
    for (ll i = 0; i < n; i++) \
    cout << v[i] << " "
#define cl cout << endl

const ll MOD = 1e9 + 7;

ll power(ll x, ll n)
{
    ll ans = 1 % MOD;
    while (n)
    {
        if (n & 1)
        {
            ans = (1LL * ans % MOD * x % MOD) % MOD;
        }

        x = (1LL * x * x % MOD);
        n >>= 1;
    }

    return ans;
}

int main()
{
    ll tt;
    cin >> tt;

    while (tt--)
    {
        ll x, n;
        cin >> x >> n;

        cout << power(x, n) << endl;
    }
}