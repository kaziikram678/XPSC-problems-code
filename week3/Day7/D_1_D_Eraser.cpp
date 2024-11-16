#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < a; i++)
        {
            if (s[i] == 'B')
            {
                cnt++;
                i += b - 1;
            }
        }
        cout << cnt << endl;
    }
}