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

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        for (int i = 0; i < n; i++)
        {
            int m;
            string s;
            cin >> m >> s;
            for (int j = 0; j < s.size(); j++)
            {
                if (s[j] == 'U')
                {
                    v[i] -= 1;
                }
                else
                    v[i] += 1;

                if(v[i]>=10)
                {
                    v[i]%=10;
                }
                else if(v[i]<0)
                {
                    v[i]+=10;
                }

            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}