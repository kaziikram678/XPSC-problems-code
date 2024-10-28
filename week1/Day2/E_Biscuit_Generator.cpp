#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int a,b,t;

    cin>>a>>b>>t;

    if(t<a) cout<<0<<endl;
    else
    {
        int x = t/a; 

        //cout<<x<<endl;

        int bis = b*x;

        cout<<bis<<endl;
    }
    return 0;
}