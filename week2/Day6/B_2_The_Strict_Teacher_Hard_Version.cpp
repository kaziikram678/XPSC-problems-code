#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,q;
        cin>>n>>m>>q;

        vector<int> v;

        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        
        while(q--)
        {
            int y;
            cin>>y;

            int it = upper_bound(v.begin(),v.end(),y)-v.begin();

            if(it==0)
            {
                cout<<v[0]-1<<endl;
            }
            else if(it==m)
            {
                cout<<n-v[m-1]<<endl;
            }
            else
            {
                cout<<(v[it]-v[it-1])/2<<endl;
            }
            
        }
    }
    return 0;
}