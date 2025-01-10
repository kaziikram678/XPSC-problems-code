#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define cv for(ll i=0;i<n;i++) cout<<v[i]<<" "
#define cl cout<<endl
#define ios ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    ios
    ll tt;
    cin>>tt;

    while(tt--)
    {
        ll n,m;
        cin>>n>>m;


        auto ok = [&](ll mid){
            if(mid-(mid/n)>=m)
            {
                return true;
            }
            return false;
        };

        ll l = 1, r = 2e9, ans;

        while(l<=r)
        {
            ll mid = l+(r-l)/2;

            if(ok(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }

        cout<<ans<<endl;
    }


}