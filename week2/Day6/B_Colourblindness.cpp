#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,m;
    string s1, s2;
    cin >> n;
    while (n--)
    {
        int f = 0;
        cin >> m;
        cin >> s1 >> s2;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == 'R' && s2[i] != 'R')
            {
                f = 1;
            }
            else if (s1[i] == 'B' && s2[i] == 'R')
            {
                f = 1;
            }
            else if (s1[i] == 'G' && s2[i] == 'R')
            {
                f = 1;
            }
        }
        if (f == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}