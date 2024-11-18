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

        string s;
        cin >> s;

        int cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' && (i == n-1 || s[i + 1] == '1'))
                cnt0++;
            if (s[i] == '1' && (i == n-1 || s[i + 1] == '0'))
                cnt1++;
        }

        cout<<min(cnt0,cnt1)<<endl;
        
    }
    return 0;
}