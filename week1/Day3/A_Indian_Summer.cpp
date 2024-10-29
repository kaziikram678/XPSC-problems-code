#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    set<string> s;
    string st;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        getline(cin,st);
        s.insert(st);

    }
    cout<<s.size()<<endl;
    return 0;
}