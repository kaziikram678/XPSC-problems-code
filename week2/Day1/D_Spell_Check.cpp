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
        map<char, int> mp;
        if (n != 5)
        {
            cout << "NO" << endl;
            continue;
        }
        string tt = "Timur";
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }

        int f = 0;
        for (char c : tt)
        {
            if (mp[c] != 1)
            {
                cout << "NO" << endl;
                f = 1;
                break;
            }
        }
        if (f == 0)
            cout << "YES" << endl;
    }
    return 0;
}