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
        cin >> n;

        string s;
        cin >> s;

        map<char, ll> mp;

        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] != '?')
                mp[s[i]]++;
        }

        ll ans = 0;

        // for (auto it : mp)
        // {
        //     cout << it.first << " " << it.second << endl;
        // }

        for (ll i = 0; i < mp.size(); i++)
        {
            if (mp[i] > n)
                ans += n;
            else
                ans += mp[i];
        }

        cout << ans << endl;
    }
}