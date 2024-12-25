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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;


    

    ll ans1 = (n/a) * p;
    ll ans2 = (n/b) * q;
    ll lcm = (a*b)/__gcd(a,b);
    ll x = (n/lcm);

    ll res = ans1+ans2-(x*min(p,q));

    cout << res << endl;
}