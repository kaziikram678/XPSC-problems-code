#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    double a,b,c;
    cin>>a>>b>>c;

    double x = a*1; //0
    double y = b*0.5; //1
    double op = c*1+y; //1

    double z = 4-(a+b+c); //1

    double ans = z*1+x+y; //2

    if(ans>op) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}