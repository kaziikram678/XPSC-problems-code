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
        int l = 1;
        int r = n * n;
        for (int i = 1; i <= n * n; i++)
        {
            if (i % 2 == 1)
            {
                v.push_back(l);
                l++;
            }
            else
            {
                v.push_back(r);
                r--;
            }
        }
        int k = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                for (int j = k; j < k + n; j++)
                {
                    cout << v[j] << " ";
                }
                cout << endl;
                k += n;
            }
            else
            {
                for (int j = (n+k)-1; j >= k ; j--)
                {
                    cout << v[j] << " ";
                }
                cout << endl;
                k += n;
            }
        }
    }
    return 0;
}