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
        ll n, m;
        cin >> n;

        string s;

        cin >> s;

        int ans = INT_MAX;

        map<ll, ll> mp;

        for (int i = 0; i < 26; i++)
        {
            int l = 0;
            int r = n - 1;
            int cnt = 0;

            while (l < r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else if(s[l]==char(i+'a'))
                {
                    cnt++;
                    l++;
                }
                else if(s[r]==char('a'+i))
                {
                    cnt++;
                    r--;
                }
                else
                {
                    cnt = n+1;
                    break;
                }
            }

            ans = min(ans,cnt);
        }

        if(ans == n+1) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
}