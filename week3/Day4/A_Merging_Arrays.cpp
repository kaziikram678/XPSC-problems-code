#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    vector<int> v1, v2;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }

    int l = 0;
    int r = 0;
    vector<int> ans;
    int cnt = 0;
    while (r < m)
    {
        while (l < n && v1[l] <= v2[r])
        {
            ans.push_back(v1[l]);
            l++;
        }

        ans.push_back(v2[r]);
        r++;
    }
    if ((n + m) > ans.size())
    {
        for (int i = l; i < v1.size(); i++)
        {
            ans.push_back(v1[i]);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}