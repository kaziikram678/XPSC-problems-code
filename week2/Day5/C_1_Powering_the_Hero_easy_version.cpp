#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        vector<ll> v;
        priority_queue<ll> pq;
        ll ans = 0;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        for(ll i=0;i<n;i++)
        {
            if(v[i]>0)
            pq.push(v[i]);
            else if(!pq.empty())
            {
                ll x = pq.top();
                ans+= x;
                pq.pop();
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}