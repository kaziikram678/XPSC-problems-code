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
    ll n;
    cin >> n;
    map<ll, ll> mp;
    for (ll i = 1; i <= n; i++)
    {
        ll l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }

    ll sum = 0;
    bool f = true;
    for (auto [key, value] : mp)
    {
        sum += value;
        if (sum > 2)
        {
            f = false;
            break;
        }
    }

    if (f)
    {
        cy;
    }
    else
    {
        cn;
    }

    return 0;
}