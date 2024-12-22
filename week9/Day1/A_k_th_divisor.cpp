#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;

    vector<ll> v;

    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if ((n / i) != i)
            v.push_back(n / i);

        }
            

        
    }

    sort(v.begin(), v.end());

    if (m > v.size())
        cout << -1 << endl;
    else
        cout << v[m - 1] << endl;

    return 0;
}