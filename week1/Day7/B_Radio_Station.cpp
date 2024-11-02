#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n,m;
    cin>>n>>m;
    string s1,s2,t1,t2;

    map<string,string> ans,has;

    for(int i=0;i<n;i++)
    {
        cin>>s1>>s2;
        ans[s1] = s2; //main 2  rep 1
        has[s2] = s1; //2 main 1 rep
    }

    // for(auto it: ans)
    // {
    //     cout<<it.first<<" "<<it.second<<endl;
    // }

    // for(auto it: has)
    // {
    //     cout<<it.first<<" "<<it.second<<endl;
    // }

    for(int i=0;i<m;i++)
    {
        cin>>t1>>t2; //proxy 192

        //cout<<has.count(t2)<<endl;
        if(t2.back()==';') t2.pop_back();
        if(has.find(t2)!=has.end())
        {
            cout<<t1<<" "<<t2<<";"<<" "<<"#"<<has[t2]<<endl;
        }
    }
    return 0;
}