#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ll n, k;
    cin >> n >> k;

    vector<ll> v;
    multiset<ll> ml;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll l = 0;
    ll r = 0;

    ll ans = 0;
    while (r < n)
    {
        ml.insert(v[r]);

        auto mn = ml.begin();
        auto mx = ml.rbegin();

        if (*mx - *mn <= k)
        {
            ans += r - l + 1;
        }
        else
        {
            while (l <= r)
            {

                auto mn = ml.begin();
                auto mx = ml.rbegin();
                if (*mx - *mn <= k)
                    break;

                ml.erase(ml.find(v[l]));
                l++;
            }
            auto mn = ml.begin();
            auto mx = ml.rbegin();
            if (*mx - *mn <= k)
            {
                ans += r - l + 1;
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}
