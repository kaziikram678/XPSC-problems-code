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

        vector<ll> odd, even;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x % 2 == 1)
                odd.push_back(x);
            else
                even.push_back(x);
        }

        if (odd.size() == 0 || even.size() == 0)
        {
            cout << 0 << endl;
            continue;;
        }
        else
        {
            sort(odd.begin(), odd.end());
            sort(even.begin(), even.end());

            ll cnt = 0;

            ll mx = odd[odd.size() - 1];
            for (ll i = 0; i < even.size(); i++)
            {
                if (mx < even[i])
                {
                    cnt = even.size() + 1;
                    break;
                }
                else
                {
                    cnt++;
                    mx += even[i];
                }
            }

            cout << cnt << endl;
        }
    }
    return 0;
}