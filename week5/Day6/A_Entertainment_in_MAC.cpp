#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s1, s2, s3;
        cin >> s1;
        s2 = s1;
        ll m = s2.size();
        s3 = s1;
        reverse(s3.begin(), s3.end());

        ll f = 0;
        for (int i = 0; i < m / 2; i++)
        {
            if (s2[i] == s2[m - i - 1])
                continue;
            if (s2[i] > s2[m - i - 1])
                f = 1;
            else
                break;
        }
        if (f == 0)
            cout << s2 << endl;
        else
            cout << s3 + s2 << endl;
    }
    return 0;
}