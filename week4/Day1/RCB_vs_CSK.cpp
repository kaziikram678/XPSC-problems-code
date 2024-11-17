#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n,m;
    cin>>n>>m;

    int x = n-m;

    if(x>=18) cout<<"RCB"<<endl;
    else cout<<"CSK"<<endl;
    return 0;
}