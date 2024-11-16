#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    stack<string> st;
    map<string, int> mp;
    vector<string> v;

    for (int i = 0; i < tt; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    for (int i = v.size()-1; i >=0; i--)
    {
        mp[v[i]]++;
        if(mp[v[i]]>1)
        {
            continue;
        }
        else st.push(v[i]);
    }


    string q;
    while (!st.empty())
    {
        string p = st.top();
        //cout<<st.top()<<endl;
        st.pop();
        
        q += p[p.size() - 1];
        q += p[p.size() - 2];
        
    }
    reverse(q.begin(),q.end());
    cout << q << endl;
}