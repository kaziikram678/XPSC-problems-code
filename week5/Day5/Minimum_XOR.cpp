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

        int ans = 0;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            ans ^= x;
        }

        int mn = ans;


        //cout<<mn<<endl;

        for(int i=0;i<n;i++)
        {
            mn = min(mn,v[i]^ans);
        }

        cout<<mn<<endl;
    }
    return 0;
}