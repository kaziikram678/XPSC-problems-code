#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        int zero = 0, other = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
                zero++;
            else
                other++;
        }

        if (zero == 0)
            cout << 0 << endl;
        else
        {
            if (other >= zero - 1)
                cout << 0 << endl;
            else
            {
                int mx = *max_element(v.begin(), v.end());

                if (mx == 1)
                    cout << 2 << endl;
                else
                    cout << 1 << endl;
            }
        }
    }
    return 0;
}