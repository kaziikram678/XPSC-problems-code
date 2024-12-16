#include <bits/stdc++.h>>
using namespace std;
#define ll long long
#define cy cout << "YES" << endl
#define cy cout << "NO" << endl
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
        ll n;
        cin >> n;

        string s;
        cin >> s;

        ll cnt_o = 0, cnt_z = 0;

        for (ll i = 0; i < n ; i++)
        {
            if (s[i] == '0')
            {
                cnt_z++;
            }
            else cnt_o++;
        }

        int ans = min(cnt_o,cnt_z);

        if (ans % 2 == 1)
            cout << "Zlatan" << endl;
        else
            cout << "Ramos" << endl;
    }

    return 0;
}
