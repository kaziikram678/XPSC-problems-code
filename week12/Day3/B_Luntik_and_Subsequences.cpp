#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define cv                     \
    for (ll i = 0; i < n; i++) \
    cout << v[i] << " "
#define cl cout << endl
#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    ios
        ll tt;
    cin >> tt;

    while (tt--)
    {
        ll n;
        cin >> n;

        vector<ll> v(n);

        ll cnt_one = 0, cnt_z = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
                cnt_one++;
            if (v[i] == 0)
                cnt_z++;
        }

        
        cout<<(1LL << cnt_z)*cnt_one<<endl;
    }
    return 0;
}
