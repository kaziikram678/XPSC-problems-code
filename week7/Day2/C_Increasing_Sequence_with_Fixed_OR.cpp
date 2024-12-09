#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;

        vector<ll> v;


        int mx = __lg(n);

        for (ll i = mx; i >= 0; i--)
        {
            if ((n >> i) & 1)
            {
                v.push_back(n - (1 << i));
            }
        }

        v.push_back(n);

        if(n==1)
        {
            cout<<1<<endl<<1<<endl;
            continue;
        }

        cout<<v.size()<<endl;

        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}
