#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        if (n > m)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            
            if (n % 2 == 1)
            {
                cout << "YES" << endl;
                for (ll i = 0; i < n - 1; i++)
                {
                    cout << 1 << " ";
                }
                cout<<(m-(n-1))<<endl;
            }
            else
            {
                if (m % 2 == 0)
                {
                    cout << "YES" << endl;
                    for (ll i = 0; i < n-2; i++)
                    {
                        cout << 1 << " ";
                    }
                    cout<<(m-(n-2))/2<<" "<<(m-(n-2))/2<<endl;
                }
                else cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
