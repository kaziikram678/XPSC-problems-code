#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin>>tt;

    while(tt--)
    {
        int n;
        cin>>n;

        vector<int> v;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            
        }
        
        int pos= 0;
        int f = 0;
        for(int i=v.size()-1;i>=0;i--)
        {
            if(mp.find(v[i])!=mp.end())
            {
                pos = i;
                f=1;
                break;
            }
            mp[v[i]]++;
        }
        if(f==0) cout<<0<<endl;
        else
        cout<<pos+1<<endl;
    }
}