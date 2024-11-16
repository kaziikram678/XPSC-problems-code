#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin>>tt;

    while(tt--)
    {
        int n,m,h;
        cin>>n>>m>>h;

        vector<int> v1,v2;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v1.push_back(x);
        }
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            v2.push_back(x);
        }
        sort(v1.begin(),v1.end());
        reverse(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        reverse(v2.begin(),v2.end());

        int ans = 0;
        for(int i=0;i<min(m,n);i++)
        {
            int x = v2[i]*h;
            //cout<<x<<endl;
            if(x>v1[i])
            {
                ans += v1[i];
            }
            else 
            {
                ans+=x;
            }
        }

        cout<<ans<<endl;
    }
}