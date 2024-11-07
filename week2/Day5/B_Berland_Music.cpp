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

        vector<int> v(n),vv(n),zero,one;
        set<pair<int,int>> st,st1;
        map<int,int> mp;

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            vv[i] = v[i];
            mp[v[i]] = i;
        }

        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1') one.push_back(v[i]);
            else zero.push_back(v[i]);
        }
        sort(zero.begin(),zero.end());
        sort(one.begin(),one.end());
        reverse(zero.begin(),zero.end());
        reverse(one.begin(),one.end());
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());

        int i=0;
        for(i=0;i<one.size();i++)
        {
            vv[mp[one[i]]] = v[i];
        }
        for(int j=0;j<zero.size();j++)
        {
            vv[mp[zero[j]]] = v[i];
            i++;
        }

        for(int i=0;i<vv.size();i++)
        {
            cout<<vv[i]<<" ";
        }
        cout<<endl;
        
        

    }
    return 0;
}