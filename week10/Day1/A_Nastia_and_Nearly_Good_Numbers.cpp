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
        ll a, b;
        cin >> a >> b;
        if (b == 1)
        {
            cout << "NO" <<endl;
        }
        else
        {
            cout << "YES" <<endl;
            ll sum = (a * b * 2);
            ll y = sum - a;
            cout << a << " " << y << " " << sum << endl;
        }
    }
}