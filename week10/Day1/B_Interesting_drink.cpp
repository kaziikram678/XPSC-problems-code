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
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        ll y;
        cin >> y;
        auto it = upper_bound(v.begin(), v.end(), y) - v.begin();
        cout << it << endl;
    }

    return 0;
}