#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    string s;
    cin>>s;

    string ss;
    map<char,int> mp;
    ss = "abcdefghijklmnopqrstuvwxyz";
    char c;
    
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    int j = 0;
    for(int i=0;i<ss.size();i++)
    {
        auto it = mp.find(ss[i]);

        if(it==mp.end())
        {
            cout<<ss[i]<<endl;
            return 0;
        }
    }
    cout<<"None"<<endl;
    return 0;
}