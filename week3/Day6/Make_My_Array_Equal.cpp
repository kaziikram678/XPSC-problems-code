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
            if(x>=0)
            {
                mp[x]++;
            }
        }
        //sort(v.begin(),v.end());
        
        if(mp.size()==2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       // cout<<cnt<<endl;
        
    }
}