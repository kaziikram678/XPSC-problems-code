#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ll n, m;
    cin >> n >> m;

    vector<ll> v1, v2;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v1.push_back(x);
    }
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        v2.push_back(x);
    }

    int l = 0;
    int r = 0;
    long long ans = 0;
    while (l < n && r < m)
    {
        int curr = v1[l];
        int cnt1 = 0, cnt2 = 0;
        
        while (l < n && v1[l] == curr)
        {
            cnt1++;
            l++;
        }
        while (r<m && v2[r] < curr)
            r++;
        while (r < m && v2[r] == curr)
        {
            cnt2++;
            r++;
        }
        ans += (1LL * cnt1 * cnt2);
    }
    cout<<ans<<endl;

    return 0;
}