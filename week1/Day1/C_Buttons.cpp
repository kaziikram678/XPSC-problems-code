#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int a,b;
    cin>>a>>b;
    int x = a-1;
    int y = b-1;
    if(a+x>a+b) cout<<a+x<<endl;
    else if(b+y>a+b) cout<<b+y<<endl;
    else cout<<a+b<<endl;
    return 0;
}