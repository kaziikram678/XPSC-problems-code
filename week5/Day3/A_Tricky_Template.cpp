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
        string a, b, c;
        cin >> a >> b >> c;
        int f = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i] && c[i] != a[i])
            {
                f = 1;
            }
            if (a[i] != b[i] && c[i] != a[i] && c[i] != b[i])
                f = 1;
        }
        if (f == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}