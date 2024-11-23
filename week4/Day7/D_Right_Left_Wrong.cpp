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

        string s;
        cin >> s;

        vector<int> pre_s(n);

        pre_s[0] = v[0];

        for (int i = 1; i < n; i++)
        {
            pre_s[i] = v[i] + pre_s[i - 1];
        }


        int l = 0;
        int r = n - 1;
        int ans = 0;
        while (l < r)
        {
            
            while(l < n && s[l] != 'L') l++;
            while(r >= 0 && s[r] != 'R') r--;


            if (s[l] == 'L')
            {
                if (s[r] == 'R')
                {
                    if (l > 0)
                    {
                        ans += pre_s[r] - pre_s[l - 1];
                    }
                    else
                        ans += pre_s[r];
                }
                l++;
                r--;
            }
            
        }

        cout << ans << endl;
    }
    return 0;
}