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

bool isprime(ll n)
{
    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isperfectsquare(ll n)
{
    ll x = sqrtl(n);

    return (x * x) == n;
}

int main()
{
    ios
        ll tt;
    cin >> tt;

    while (tt--)
    {
        ll n;
        cin >> n;

        if (isperfectsquare(n) && isprime(sqrtl(n)))
        {
            cy;
        }
        else
            cn;
    }
}