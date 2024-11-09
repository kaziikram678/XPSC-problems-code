#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;

        cin >> n >> c;

        vector<pair<int,int>> v, vv;

        string s;

        cin >> s;
        s+=s;
        if (s.size() == 1)
            cout << 0 << endl;
        else
        {
            int mx = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == c)
                {
                    int cnt = 0;
                    while(s[i]!='g' && i<s.size())
                    {
                        cnt++;
                        i++;
                    }
                    if(cnt>mx) mx = cnt;
                    
                }
            }

            cout<<mx<<endl;
        }
    }
    return 0;
}