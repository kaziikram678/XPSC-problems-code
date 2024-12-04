#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        vector<int> v;

        int x = ceil((double)m/2);

        int rem;

        int y,z;

        if(m%2==1)
        {
            y = (m/2)*7+11;
        }
        else y = (m/2)*7;

        if(n<=y)
        cout<<x<<endl;
        else
        {
            int rem = n-y;
            cout<<x+ceil((double)rem/15)<<endl;
        }



    }
    return 0;
}