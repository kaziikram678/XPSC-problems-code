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

        map<int, int> mp;
        priority_queue<int> pq;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        for (auto it : mp)
        {
            pq.push(it.second);
        }
        int p, q, ans = 0;

        while (pq.size() >= 2)
        {
            p = pq.top(); // 3
            pq.pop();
            q = pq.top(); // 2
            pq.pop();
            p--;
            q--;
            if(p>0) pq.push(p);
            if(q>0) pq.push(q);
        }
        if(pq.size()==0)
        {
            cout<<0<<endl;
        }
        else
        cout << pq.top() << endl;
    }
    return 0;
}