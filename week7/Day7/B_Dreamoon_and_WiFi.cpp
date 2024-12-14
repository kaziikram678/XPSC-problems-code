#include<bits/stdc++.h>>
using namespace std;
#define ll long long
#define cy cout<<"YES"<<endl
#define cy cout<<"NO"<<endl
#define cv for(ll i=0;i<n;i++) cout<<v[i]<<" "
#define cl cout<<endl

int main()
{
    string s,t;

    cin>>s>>t;

    int ans_s = 0, ans_t = 0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+') ans_s += 1;
        else if(s[i]=='-') ans_s -= 1;
    }

    ll cnt_q = 0;

    for(int i=0;i<t.size();i++)
    {
        if(t[i]=='+') ans_t += 1;
        else if(t[i]=='-') ans_t -= 1;
    }

    for(int i=0;i<t.size();i++)
    {
        if(t[i]=='?') cnt_q++;
    }

    ll cnt = 0;

    for(int i=0;i<(1LL<<cnt_q);i++)
    {
        ll ans_tt = ans_t;
        for(int j=0;j<cnt_q;j++)
        {
            if((i>>j)&1) ans_tt += 1;
            else ans_tt -= 1;
        }

        if(ans_s == ans_tt) cnt++;
    }

    //cout.precision(12);

    cout<<setprecision(12)<<fixed<<(double)cnt/(1LL<<cnt_q)<<endl;


}