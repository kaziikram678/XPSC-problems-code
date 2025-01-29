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
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<ll> d(n + 1);
    for (ll i = 0; i < q; i++)
    {
        ll l, r;
        cin >> l >> r;
        l--, r--;
        d[l]++;
        d[r + 1]--;
    }

    for (ll i = 1; i <= n; i++)
    {
        d[i] = d[i - 1] + d[i];
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    sort(d.begin(), d.end());
    reverse(d.begin(), d.end());

    long long ans = 0;

    for (ll i = 0; i < n; i++)
    {
        ans += (v[i] * d[i]);
    }

    cout << ans << endl;

    return 0;
}