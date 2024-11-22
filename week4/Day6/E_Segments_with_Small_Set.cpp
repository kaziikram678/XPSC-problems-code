#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ll n, k;
    cin >> n >> k;

    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    
    ll ans = 0;
    map<ll,ll> mp;


    ll l = 0;
    for(int r = 0; r<n; r++)
    {
        mp[v[r]]++;

        while(mp.size()>k)
        {
            mp[v[l]]--;
            if(mp[v[l]]==0)
            {
                mp.erase(v[l]);
            }
            l++;
        }
        ans+=r-l+1;
    }

    cout << ans << endl;
    return 0;
}