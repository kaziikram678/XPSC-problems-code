#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, customer = 1;
    cin >> n;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ms;
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int money;
            cin >> money;
            s.insert({customer, money});
            ms.insert({money, -customer});
            customer++;
        }
        else if (type == 2)
        {
            int pos = s.begin()->first;
            int money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ms.erase({money, -pos});
        }
        else
        {
            int pos = -ms.rbegin()->second;
            int money = ms.rbegin()->first;
            ans.push_back(pos);
            ms.erase(--ms.end());
            s.erase({pos, money});
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}