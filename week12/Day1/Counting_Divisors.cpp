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

const int maxN = 1e6 + 9;
vector<int> v(maxN);

int main()
{
    ios

    for (ll i = 1; i < maxN; i++)
    {
        for (int j = i; j < maxN; j += i)
        {
            v[j]++;
        }
    }


    int tt;
    cin >> tt;

    while (tt--)
    {
        ll n;
        cin >> n;

        cout<<v[n]<<endl;
    }
}