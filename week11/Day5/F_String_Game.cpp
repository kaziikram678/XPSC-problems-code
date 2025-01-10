#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define cv                      \
    for (int i = 0; i < n; i++) \
    cout << v[i] << " "
#define cl cout << endl
#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    ios
        string s,
        t;
    cin >> s >> t;

    int n = s.size(), m = t.size();

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i]--;
    }

    int f = 0;

    auto ok = [&](int md)
    {
        vector<bool> bad(n);

        for (int i = 0; i <= md; i++)
        {
            bad[v[i]] = true;
        }

        int j = 0;

        for (int i = 0; i < n; i++)
        {
            if (!bad[i] && s[i] == t[j])
            {
                j++;
            }

            if (j == m)
            {
                f = 1;
                return true;
            }
        }
        return false;
    };

    int l = 0, r = n - 1, ans = 0;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    cout << (f? ans + 1 : ans) << endl;
}