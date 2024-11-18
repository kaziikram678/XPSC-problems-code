#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,s;
        cin>>a>>b>>n>>s;

        ll x = s%n;
        if(x<=b && a*n+b>=s) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}