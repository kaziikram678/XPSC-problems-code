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

        if(n<7) 
        {
            cout<<1<<" "<<0<<endl;
            continue;
        }
        else
        {
            ll ans = 0;
            ll pos = 0;

            for(ll i=0;i<100000;i++)
            {
                ans = 7^i;

                if(ans*7==n)
                {
                    pos = i;
                }

            }
            cout<<7<<" "<<pos<<endl;
        }

    }
    return 0;
}