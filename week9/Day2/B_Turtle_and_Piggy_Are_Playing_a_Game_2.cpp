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
        ll n, m;
        cin >> m;

        
        vector<ll> v(m+1);

        for (int i = 1; i <= m; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        cout << v[m / 2 + 1] << " " << endl;
        
    }
}