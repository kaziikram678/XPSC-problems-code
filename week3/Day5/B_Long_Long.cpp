#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> v;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
            sum += abs(x);
        }

        ll f = 0;
        ll cnt = 0;
        for (ll i = 0; i <= n; i++)
        {

            if (f == 1 && (i == n || v[i] > 0))
            {
                cnt++;
                f = 0;
            }

            else if (v[i] < 0)
            {
                f = 1;
            }
        }

        cout << sum << " " << cnt << endl;
    }
    return 0;
}