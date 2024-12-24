#include <bits/stdc++.h>>
using namespace std;
#define ll long long
#define cy cout << "YES" << endl
#define cy cout << "NO" << endl
#define cv                     \
    for (ll i = 0; i < n; i++) \
    cout << v[i] << " "
#define cl cout << endl

long long GCD(long long x, long long y)
{
    return __gcd(x, y);
}

int main()
{
    ll tt;
    cin >> tt;

    while (tt--)
    {
        ll n, m;
        cin >> n;

        vector<ll> v(n);

        ll ans1 = 0, ans2 = 0;

        for (ll i = 0; i < n; i++)
            cin >> v[i];

        for (ll i = 0; i < n; i += 2)
        {
            ans1 = __gcd(ans1, v[i]);
        }

        for (ll i = 1; i < n; i += 2)
        {
            ans2 = __gcd(ans2, v[i]);
        }

        ll ans3 = 0;
        ll f = 0;

        for (ll i = 1; i < n; i += 2)
        {
            if (v[i] % ans1 == 0)
                f = 1;
        }

        if (f == 0)
        {
            ans3 = ans1;
            
        }
        else
        {
            f = 0;
            for (ll i = 0; i < n; i += 2)
            {
                if (v[i] % ans2 == 0)
                    f = 1;
            }
            if (f == 0)
            {
                ans3 = ans2;
                
            }
        }
        cout<<ans3<<endl;
    }
}