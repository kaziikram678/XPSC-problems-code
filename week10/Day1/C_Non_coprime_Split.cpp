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
    ll tt;
    cin >> tt;

    while (tt--)
    {
        ll n, m;
        cin >> n >> m;

        if (m <= 3)
        {
            cout << -1 << endl;
        }
        else if (n < m)
        {
            if (m % 2 == 0)
            {
                cout << m / 2 << " " << m / 2 << endl;
            }
            else
            {
                m--;
                cout << m / 2 << " " << m / 2 << endl;
            }
        }
        else
        {
            ll div = 0;
            for (int i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    div = i;
                    break;
                }
                if(div==0) div = n;
            }

            if (div == n)
                cout << -1 << endl;
            else
                cout << div << " " << n - div << endl;
        }
    }
}