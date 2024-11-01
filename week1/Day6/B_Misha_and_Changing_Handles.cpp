#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string s1, s2;
    map<string, string> ans, has;
    for (int i = 0; i < n; i++)
    {
        cin >> s1 >> s2;

        if (has.find(s1) != has.end())
        {
            string real_name = has[s1];

            ans[real_name] = s2;

            has.erase(s1);

            has[s2] = real_name;

        }
        else
        {
            ans[s1] = s2;
            has[s2] = s1;
        }

    }
    cout<<ans.size()<<endl;
    for(auto it:ans)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}