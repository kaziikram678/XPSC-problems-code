#include<bits/stdc++.h>
using namespace std;

int main()
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
    int cnt=1;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>=cnt)
        {
            cnt++;
        }
        //cout<<it<<endl;
    }
    cout<<cnt-1<<endl;
    return 0;
}