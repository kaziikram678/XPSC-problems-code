#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> v(n+5);

    for(int i=0;i<n;i++) cin>>v[i];
    int f = 0;
    for (int i = 0; i < (1<<n); i++)
    {
        int sum = 0;
        for(int j=0;j<n;j++)
        {
            if((i>>j)&1) sum+=v[j];
            else sum-=v[j];
        }
        if(sum%360==0)
        {
            f=1;
            break;
        }
        
    }

    if(f==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}