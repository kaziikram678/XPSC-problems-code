#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;

    int x = n;
    int cnt = 0;
    while(x>0)
    {
        //int r = n%10;
        x = x/10;
        cnt++;
        
    }
    //cout<<cnt<<endl;
    if(cnt==4) cout<<n<<endl;
    else if(cnt==3) cout<<"0"<<n<<endl;
    else if(cnt==2) cout<<"00"<<n<<endl;
    else cout<<"000"<<n<<endl;

    
    return 0;
}