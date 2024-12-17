#include <bits/stdc++.h>>
using namespace std;
#define ll long long
#define cy cout << "YES" << endl
#define cy cout << "NO" << endl
#define cv                     \
    for (ll i = 0; i < n; i++) \
    cout << v[i] << " "
#define cl cout << endl

int main()
{
    ll n,m,a,b,c,sum=0;
    ll flag =0;
    cin>>n;
    char arr[10][10];
    while(n--)
    {
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cin>>arr[i][j];
            }
        }
        ll cnt=0,cnt1=0;
 
        for(int j=0; j<8; j++)
        {
            for(int i=0; i<8; i++)
            {
                if(arr[i][j]=='B')
                {
                    cnt++;
                }
            }
            if(cnt==8) flag=1;
             cnt=0;
        }
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                if(arr[i][j]=='R')
                {
                    cnt1++;
                }
            }
            if(cnt1==8) flag=2;
            cnt1=0;
        }
        if(flag==1) cout<<"B"<<endl;
        else if(flag==2) cout<<"R"<<endl;
 
    }
}