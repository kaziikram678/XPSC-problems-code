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
        ll n, a, b;
        cin >> n >> a >> b;
        vector<ll> v;
        v.push_back(a);
        ll l = n;
        for (ll i = 2; i <= n / 2; i++)
        {
            while (l == a || l == b)
                l--;
            v.push_back(l);
            l--;
        }
        ll r = 1;
        for (int i = n / 2 + 1; i <= n; i++)
        {
            while (r == a or r == b)
                r++;
            v.push_back(r);
            r++;
        }
        v[n - 1] = b;
        ll f = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (v[i] < a)
            {
                f = 1;
                break;
            }
        }
        for (int i = n / 2; i < n; i++)
        {
            if (v[i] > b)
            {
                f = 1;
                break;
            }
        }
        if (f)
            cout << -1 ;
        else
            for (auto i : v)
                cout << i << " ";
        cout << endl;
    }
}