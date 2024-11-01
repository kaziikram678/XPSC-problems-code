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
        map<string, vector<int>> mp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>s;

                mp[s].push_back(i);
            }
        }
        vector<int> v(3);
        for(auto [x,y]:mp)
        {
            vector<int> vv = y;
            if(vv.size()==1) v[vv[0]] += 3;
            else if(vv.size()==2) 
            {
                v[vv[0]]++;
                v[vv[1]]++;
            }
        }

        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}