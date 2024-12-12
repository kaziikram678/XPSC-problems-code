#include <bits/stdc++.h>>
using namespace std;
#define ll long long
#define cy cout << "YES" << endl
#define cy cout << "NO" << endl
#define cl cout << endl

const ll MAX_N = (1LL << 15);

vector<ll> all_pali;

bool is_pali(int x)
{
    string s = to_string(x);
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - i - 1])
        {
            return false;
        }
    }
    return true;
}

void mark_pali()
{
    for (int i = 0; i < MAX_N; i++)
    {
        if (is_pali(i))
            all_pali.push_back(i);
    }
}

int main()
{

    mark_pali();

    ll tt;
    cin >> tt;

    while (tt--)
    {
        ll n, m;
        cin >> n;

        vector<ll> v(n + 5);

        vector<ll> cnt(MAX_N + 1);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            cnt[v[i]]++;
        }

        ll ans = n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < all_pali.size(); j++)
            {
                ll curr = (v[i] ^ all_pali[j]);
                ans += cnt[curr];
            }
        }

        cout << ans/2 << endl;
    }
}