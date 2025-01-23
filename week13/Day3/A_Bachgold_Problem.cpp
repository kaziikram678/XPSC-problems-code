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
    ll n;

    cin>>n;

    ll odd = 0, even = 0;

    if(n%2==0)
    {
        even = n/2;
        cout<<n/2<<endl;
        for(int i=0;i<even;i++)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        odd = (n-3)/2;
        cout<<odd+1<<endl;
        for(int i=0;i<odd;i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }


}