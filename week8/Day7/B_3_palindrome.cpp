#include<bits/stdc++.h>>
using namespace std;
#define ll long long
#define cy cout<<"YES"<<endl
#define cy cout<<"NO"<<endl
#define cv for(ll i=0;i<n;i++) cout<<v[i]<<" "
#define cl cout<<endl

int main()
{
    ll n;
    cin>>n;

    string s = "abc";
    string t;

    for(int i=0;i<n;i++)
    {
        t += s[i%3];
    }

    cout<<t<<endl;


}