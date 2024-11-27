#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        vector<int> v;
        cin >> x >> y;
        for (int i = x; i > y + 1; i--)
        {
            v.push_back(i);
        }
        for (int i = 1; i <= y + 1; i++)
        {
            v.push_back(i);
        }
        for (int i = 0; i < x; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}