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
        vector<int> vv;
        vector<int> vvv;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            vv.push_back(x);
            vvv.push_back(x);
        }
        sort(v.begin(),v.end());

        int ans = INT_MAX;
        vv = v;
        vv.pop_back();
        vv.pop_back();

        ans = min(vv.back()-vv.front(),ans);

        vv = v;

        ans = min(v.back()-v[2],ans);

        ans = min(v[n-2]-v[1],ans);
        cout<<ans<<endl;
    }
    return 0;
}