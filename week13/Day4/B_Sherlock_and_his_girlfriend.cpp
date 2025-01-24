#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define cv for(ll i=0;i<n;i++) cout<<v[i]<<" "
#define cl cout<<endl
#define ios ios::sync_with_stdio(false); cin.tie(nullptr);


bool isPrime(long long  n) {
   if (n == 1) {
      return false;
   }
   for (int i = 2;i * i <= n;i++) {
      if (n % i == 0) {
         return false;
      }
   }

   return true;
}

bool isPerfectSquare(long long n) {
   long long x = sqrtl(n);
   return (x * x) == n;
}


int main()
{
    ios
    ll n;
    cin>>n;

    vector<ll> ans;

    for(int i=2;i<=n+1;i++)
    {
        if(isPrime(i)) ans.push_back(1);
        else ans.push_back(2);
    }

    if(n>=3) cout<<2<<endl;
    else cout<<1<<endl; 

    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    

}