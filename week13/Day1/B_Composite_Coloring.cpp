#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define cv                     \
    for (ll i = 0; i < n; i++) \
    cout << v[i] << " "
#define cl cout << endl
#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);


void seive(int n)
{
    vector<bool> prime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            cout << i << " ";
        }
    }
    cout << '\n';
}

vector<int> allPrimes = { 2,3, 5 ,7 ,11, 13, 17, 19, 23, 29, 31 };

int main()
{
    ios

    //seive(40);


    
    ll tt;
    cin >> tt;

    while (tt--)
    {
        ll n, m;
        cin >> n;

        vector<ll> v(n);

        for (ll i = 0; i < n; i++)
            cin >> v[i];

        
        map<int,vector<int>> mp;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<11;j++)
            {
                if(v[i] % allPrimes[j]==0)
                {
                    mp[allPrimes[j]].push_back(i);
                    break;
                }
            }
        }

        vector<int> ans(n);
        int cnt = 1;

        for(auto it:mp)
        {
            
            vector<int> x = it.second;

            for(auto i:x)
            {
                ans[i] = cnt;
            }
            cnt++;
        }

        cout<<mp.size()<<endl;

        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    
}