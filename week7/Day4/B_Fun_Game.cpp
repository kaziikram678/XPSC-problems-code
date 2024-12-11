#include <bits/stdc++.h>>
using namespace std;
#define ll long long
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define cv                     \
    for (ll i = 0; i < n; i++) \
    cout << v[i] << " "
#define cl cout << endl
#define nl endl

int main()
{
    ll tt;
    cin >> tt;

    while (tt--)
    {
        ll n, m;
        cin >> n;
        string s, t;
        cin >> s >> t;

        vector<ll> v(n + 5);

        ll s_sz = s.size();
        ll t_sz = t.size();

        if (s == t)
        {
            cout << "YES" << nl;
            continue;
        }
        else if (s[0] == '1')
        {
            cy;
            continue;
        }
        else
        {
            ll pos_f = -1;
            for (ll i = 0; i < s_sz; i++)
            {
                if (s[i] == '1')
                {
                    pos_f = i;
                    break;
                }
            }
            if (pos_f != -1)
            {
                int f = 0;
                for (int i = 0; i < n; i++)
                {
                    if (s[i] != t[i])
                    {
                        if (pos_f > i)
                        {
                            f = 1;
                            break;
                        }
                    }
                }
                if (f == 1)
                    cn;
                else
                    cy;
            }
            else
                cn;
        }
    }
}