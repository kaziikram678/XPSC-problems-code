#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios
    ll n,m;
    cin >> n >> m;
    pbds<ll> p;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        p.insert(x);
    }

    for (ll i = 1; i <= m; i++)
    {
        ll x;
        cin >> x;
        cout << p.order_of_key(x + 1) << " ";
    }
    cout << endl;
    return 0;
}