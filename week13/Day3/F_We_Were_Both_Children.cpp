#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define cv(v)                         \
    for (ll i = 0; i < v.size(); i++) \
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
        int n;
        cin >> n;
        map<int, int> mp;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] <= n)
                mp[v[i]]++;
        }

        vector<int> ans(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
                ans[j] += mp[i];
        }

        int mx = *max_element(ans.begin(), ans.end());
        cout << mx << endl;
    }

    return 0;
}
