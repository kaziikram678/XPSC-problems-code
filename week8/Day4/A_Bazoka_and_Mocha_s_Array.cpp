#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        vector<ll> ans(n);
        for (ll i = 0; i < n; i++) {
            cin >> ans[i];
        }

        ll f = 0;
        for (ll i = 0; i < n; i++) {
            bool is_sorted = true;
            for (ll j = 1; j < n; j++) {
                if (ans[j] < ans[j - 1]) {
                    is_sorted = false;
                    break;
                }
            }

            if (is_sorted) {
                f = 1;
                break;
            }

            ll first = ans[0];
            for (ll j = 0; j < n - 1; j++) {
                ans[j] = ans[j + 1];
            }
            ans[n - 1] = first;
        }

        if (f == 0)
            cn;
        else
            cy;
    }
    return 0;
}
