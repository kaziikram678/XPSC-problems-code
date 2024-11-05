#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        map<int, set<int>> mp;

        for (int i = 1; i <=n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }

        
        for(int i=1;i<=m;i++)
        {
            int p, q,ans1,ans2;
            cin >> p >> q;
            if((mp.find(p)!=mp.end()) && (mp.find(q)!=mp.end()))
            {
                ans1 = *mp[p].begin();
                ans2 = *mp[q].rbegin();
                if(ans1<ans2) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }

            else cout<<"NO"<<endl;
        }
    }
    return 0;
}