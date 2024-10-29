#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string s, ss;
    while (n--)
    {
        cin >> s;

        int f = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            cout << s[i];
            if (s[i] == s[i + 1] && f == 0)
            {
                if (s[i] == 'a')
                    cout << 'b';
                else
                    cout << "a";
                f = 1;
            }
        }
        cout << s[s.size() - 1];
        if (f==0)
        {
            if (s[s.size() - 1] == 'a')
                cout << 'b';
            else
                cout << "a";
        }
        cout<<endl;
    }
    return 0;
}