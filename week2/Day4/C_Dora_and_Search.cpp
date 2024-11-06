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
        set<int> s;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            s.insert(x);
        }

        int l = 0;
        int r = n-1;
        int ll,rr;
        int f = 0;
        while(l<r)
        {
            if((v[l]!=*s.begin() && v[r]!=*s.rbegin()) && (v[r]!=*s.begin() && v[l]!=*s.rbegin()))
            {
                ll = l;
                rr = r;
                f = 1;
                break;
            }
            else if(v[l]==*s.begin() || v[l]==*s.rbegin())
            {
                s.erase(v[l]);
                l++;
            }
            else if(v[r]==*s.begin() || v[r]==*s.rbegin())
            {
                s.erase(v[r]);
                r--;
            }
        }
        if(f==1) cout<<ll+1<<" "<<rr+1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}