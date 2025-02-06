#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios ll n;
    cin >> n;
    string s;
    cin >> s;
    string r = s;
    reverse(r.begin(), r.end());

    map<char, vector<ll>> v, vv;
    for (ll i = 0; i < n; i++)
    {
        v[s[i]].push_back(i);
        vv[r[i]].push_back(i);
    }

    vector<ll> vvv(n);
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        for (ll i = 0; i < v[ch].size(); i++)
        {
            vvv[vv[ch][i]] = v[ch][i];
        }
    }

    pbds<ll> p;
    long long ans = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        ans += p.order_of_key(vvv[i]);
        p.insert(vvv[i]);
    }
    cout << ans << endl;
}