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

        vector<int> v;
        map<char,int> mp;
        string s = "abcdefghijklmnopqrstuvwxyz";
        string ss;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }

        for(int i=0;i<s.size();i++)
        {
            mp[s[i]] = 0;
        }

        for(int i=0;i<n;i++)
        {
            for(auto it:mp)
            {
                if(v[i]==it.second)
                {
                    cout<<it.first;
                    mp[it.first]++;
                    break;
                }
            }
        }

        cout<<ss<<endl;
    }
    return 0;
}