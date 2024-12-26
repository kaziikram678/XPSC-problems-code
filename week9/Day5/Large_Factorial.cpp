#include<bits/stdc++.h>>
using namespace std;
#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define cv for(ll i=0;i<n;i++) cout<<v[i]<<" "
#define cl cout<<endl

const ll MOD = 1e9+7;

int main()
{
    ll tt;
    cin>>tt;

    while(tt--)
    {
        ll n,m;
        cin>>n;
        
        ll ans = 1;
        for(ll i=1;i<=n;i++)
        {
            ans = (1LL * ans % MOD * i % MOD)% MOD;
        }

        cout<<ans<<endl;
    }


}