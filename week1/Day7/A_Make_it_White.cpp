#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll m,x=-1,y=-1;
        cin>>m;
        string s;
        cin>>s;
        ll cnt=0;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='B')
            {
                x = i;
                break;
            }
        }
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i]=='B')
            {
                y = i;
                break;
            }
        }
        if(x==-1)
        {
            cout<<0<<endl;
        }
        else cout<<abs(y-x)+1<<endl;


    }
}