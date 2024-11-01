#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    
    while(n--)
    {
        stack<int> upper, lower;
        map<int, char> mp;
        string s;
        cin>>s;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='B')
            {
                if(!upper.empty())
                {
                    int  x = upper.top();
                    mp[x] = '#';
                    upper.pop();
                }
                continue;
            }
            else if(s[i]=='b')
            {
                if(!lower.empty())
                {
                    int  x = lower.top();
                    mp[x] = '#';
                    lower.pop();
                }
                continue;
            }
            mp[i] = s[i];

            if(isupper(s[i]))
            {
                upper.push(i);
            }
            else lower.push(i);

        }
        for(int i=0;i<s.size();i++)
        {
            if(mp.count(i) && mp[i]!='#')
            {
                cout<<mp[i];
            }
        }
        cout<<endl;
    }
    return 0;
}