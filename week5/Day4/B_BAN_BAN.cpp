#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        if (m == 1)
            cout << "1" << endl
                 << "1" << " " << "2" << endl;
        else if (m == 2)
            cout << "1" << endl
                 << "2" << " " << "6" << endl;
        else if (m % 2 == 0)
        {
            cout << m / 2 << endl;
            for (int i = 2, j = ((m * 3) / 2) + 3; i <= ((m * 3) / 2), j <= (m * 3); i += 3, j += 3)
            {
                cout << i << " ";
                cout << j << endl;
            }
        }
        else if (m % 2 != 0)
        {
            cout << m / 2 + 1 << endl;
            for (int i = 2, j = ((m * 3) / 2) + 2; i <= ((m * 3) / 2), j <= (m * 3); i += 3, j += 3)
            {
                cout << i << " ";
                cout << j << endl;
            }
        }
    }
    return 0;
}