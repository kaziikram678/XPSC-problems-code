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

        string s;
        cin>>s;

        vector<int> v;
        int cntW = 0, cntB = 0, j=0;
        int ans = INT_MAX;
        for(int i=0;i<n;i++)
        {
            j++;
            if(s[i]=='B') cntB++;
            if(s[i]=='W') cntW++;

            if(j>=m)
            {
                if(s[i-m]=='B') cntB--;
                if(s[i-m]=='W') cntW--;
                ans = min(ans,cntW);
                j--;
            }
        }

        cout<<ans<<endl;
        

    }
    return 0;
}