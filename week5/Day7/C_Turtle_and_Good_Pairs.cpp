#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        string s;

        cin>>s;

        vector<int> v;

        map<char,int> mp;

        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }

        priority_queue<pair<int,char>> pq;

        for(auto it:mp)
        {
            pq.push({it.second,it.first});
        }

        string res = "";

        while(pq.size()>1)
        {
            auto p = pq.top();
            pq.pop();

            if(p.first!=1) pq.push({p.first-1,p.second});

            res += p.second;
        }

        if(pq.size()!=0)
        {
            auto p = pq.top();

            pq.pop();

            for(int i=0;i<p.first;i++)
            {
                res+=p.second;
            }
        }

        cout<<res<<endl;
    }
    return 0;
}