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


const int maxN = 1e6+5;
vector<int> allPrimes;

void sieve() {
   vector<bool> prime(maxN + 1, true);
   for (int i = 2;i * i <= maxN;i++) {
      if (prime[i]) {
         for (int j = i + i;j <= maxN;j += i) {
            prime[j] = false;
         }
      }
   }

   for (int i = 2;i <= maxN;i++) {
      if (prime[i]) {
         allPrimes.push_back(i);
      }
   }
}

int main()
{
    sieve();
    ios
        ll tt;
    cin >> tt;

    while (tt--)
    {
        ll n, m;
        cin >> n;

        ll x,ans = 1;

        for(int i=0;i<maxN;i++)
        {
            if(allPrimes[i]-1>=n)
            {
                ans *= allPrimes[i];
                x = allPrimes[i];
                break;
            }
        }

        for(int i = 1;i<=maxN;i++)
        {
            if(allPrimes[i]-x>=n)
            {
                ans *= allPrimes[i];
                break;
            }
        }

        cout<<ans<<endl;

    }
}