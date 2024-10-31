#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    vector<ll> v;
    vector<ll> vv;
    
    for(ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    
    ll sum1 = 0, sum2 = 0;
    for(ll i = 0; i < n; i++) {
        if(v[i] % 2 == 0) {
            sum1 += v[i];
        } else {
            vv.push_back(v[i]);
        }
    }

    sort(vv.begin(), vv.end());
   
    for(ll i = 0; i < vv.size(); i++) {
        sum2 += vv[i];
    }
    
    if (sum2 % 2 != 0) {
        sum2 -= vv[0];
    }
    
    cout << sum1 + sum2 << endl;
    
    return 0;
}
