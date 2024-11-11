#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s1, s2;
        cin >> n;
        cin >> s1;
        s2 = s1;
        reverse(s2.begin(), s2.end());
        int cnt = s1.size();
        for (int i = 0; i < n / 2; i++)
        {
            if (s1[i] != s2[i])
            {
                cnt -= 2;
            }
            else
                break;
        }
        cout << cnt << endl;
    }
    return 0;
}