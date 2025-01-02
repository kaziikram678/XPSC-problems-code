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

    ll n, m;
    cin >> n >> m;

    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
        cin >> v[i];

    for (ll i = 0; i < m; i++)
    {
        ll k;
        cin >> k;
        ll l = 0;
        ll r = n - 1;
        ll f = 0;
        ll ans = -1;
        while (l <= r)
        {
            ll mid = (l + r) / 2;

            if (v[mid] >= k)
            {
                ans  = mid;
                r = mid - 1;
            }
            else if (v[mid] < k)
            {
                l = mid + 1;
            }
        }
        if(ans==-1) cout<<n+1<<endl;
        else
        cout<<ans+1<<endl;
    }
}