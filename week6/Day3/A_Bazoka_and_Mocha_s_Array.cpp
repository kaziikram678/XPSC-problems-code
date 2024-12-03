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

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int f = 0;
        for(int i=0;i<n;i++)
        {
            f |= is_sorted(v.begin(), v.end());
            rotate(v.begin(),v.begin()+1,v.end());
        }

        if(f==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
