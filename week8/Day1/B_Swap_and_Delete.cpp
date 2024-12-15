#include <bits/stdc++.h>>
using namespace std;
#define ll long long
#define cy cout << "YES" << endl
#define cy cout << "NO" << endl
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
        string s;
        cin >> s;
        int cnt1 = 0, cnt0 = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                cnt1++;
            else
                cnt0++;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                if (cnt0 <= 0)
                    break;
                else
                    cnt0--;
            }
            else if (s[i] == '0')
            {

                if (cnt1 <= 0)
                    break;
                else
                    cnt1--;
            }
        }
        cout << cnt1 + cnt0 << endl;
    }
}