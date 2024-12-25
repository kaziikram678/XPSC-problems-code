#include<bits/stdc++.h>>
using namespace std;
#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define cv for(ll i=0;i<n;i++) cout<<v[i]<<" "
#define cl cout<<endl

bool isprime(ll n)
{
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ll n;

    cin>>n;

    if(isprime(n))
    {
        cout<<1<<endl;
    }
    else if(n%2==0)
    {
        cout<<2<<endl;
    }
    else
    {
        if(isprime(n-2))
        {
            cout<<2<<endl;
        }
        else cout<<3<<endl;
    }


}