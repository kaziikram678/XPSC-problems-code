#include <bits/stdc++.h>>
using namespace std;
#define ll long long
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define cl cout << endl



int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v(m+1);

    for (int i = 0; i <= m; i++)
        cin >> v[i];

    int cnt2 = 0;

    for(int i=0;i<m;i++)
    {
        int x = v[i] ^ v[m];

        int mx = __lg(x);

        int cnt = 0;

        for(int j = mx; j>=0; j--)
        {
            if((x>>j)&1) cnt++;
        }

        if(cnt<=k) cnt2++;
    }

    cout<<cnt2<<endl;
    
    return 0;

}