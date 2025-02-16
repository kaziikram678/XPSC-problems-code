#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios
        ll tt;
    cin >> tt;

    while (tt--)
    {
        ll n, m, k;
        cin >> n;

        vector<ll> v(n);

        for (ll i = 0; i < n; i++)
            cin >> v[i];

        bool f = false;

        for (int i = 0; i < n; i++)
        {
            if (v[0] != v[i])
            {
                f = true;
                break;
            }
        }

        if (f)
        {
            cy;
            ll dis = -1;
            for (int i = 1; i < n; i++)
            {
                if (v[0] != v[i])
                {
                    cout << 1 << " " << i + 1 << endl;
                    dis = i + 1;
                }
            }

            for (int i = 1; i < n; i++)
            {
                if (v[0] == v[i])
                {
                    cout << dis << " " << i + 1 << endl;
                }
            }
        }
        else
            cn;
    }
}