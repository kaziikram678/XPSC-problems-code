#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    string s;
    set<string> se;
    string st[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>st[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        if(se.count(st[i])>0) continue;
        cout<<st[i]<<endl;
        se.insert(st[i]);
    }
    return 0;
}