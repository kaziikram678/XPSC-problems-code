#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define cv                    \
   for (ll i = 0; i < n; i++) \
   cout << v[i] << " "
#define cl cout << endl
#define ios                     \
   ios::sync_with_stdio(false); \
   cin.tie(nullptr);

bool isPrime(long long n)
{
   if (n == 1)
   {
      return false;
   }
   for (int i = 2; i * i <= n; i++)
   {
      if (n % i == 0)
      {
         return false;
      }
   }

   return true;
}

bool isPerfectSquare(long long n)
{
   long long x = sqrtl(n);
   return (x * x) == n;
}

int main()
{
   ios
       ll n;
   cin >> n;

   ll cnt2 = 0;

   for (int i = 6; i <= n; i++)
   {
      ll cnt1 = 0;
      for (int j = 2; j <=i; j++)
      {
         if (i % j == 0 && isPrime(j))
         {
            cnt1++;
         }
         if (cnt1 > 2)
            break;
      }
      if (cnt1 == 2)
         cnt2++;
   }

   cout << cnt2 << endl;
}