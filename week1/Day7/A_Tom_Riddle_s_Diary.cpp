#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    map<string,int> mp;
    while(n--)
    {
        string s;
        cin>>s;

        if(mp.find(s)!=mp.end())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            mp[s]++;
            cout<<"NO"<<endl;
        }
    }
    return 0;
}