#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    // for(int i=0;i<n;i++) cout<<v[i]<<" ";

    int s = 0, d = 0;

    int i = 0;
    int j = n - 1;
    if(n==1)
    {
        cout<<v[0]<<" "<<0<<endl;
        return 0;
    }
    if (n % 2 == 0)
    {
        while (i < j)
        {
            if (v[i] > v[j])
            {
                s += v[i];
                i++;
                if (v[i] > v[j])
                {
                    d += v[i];
                    i++;
                }
                else
                {
                    d += v[j];
                    j--;
                }
            }
            else if (v[i] < v[j])
            {
                s += v[j];
                j--;
                if (v[i] > v[j])
                {
                    d += v[i];
                    i++;
                }
                else
                {
                    d += v[j];
                    j--;
                }
            }
        }
    }
    else
    {
        while (i < j)
        {
            if (v[i] > v[j])
            {
                s += v[i];
                i++;
                if (v[i] > v[j])
                {
                    d += v[i];
                    i++;
                }
                else
                {
                    d += v[j];
                    j--;
                }
            }
            else if (v[i] < v[j])
            {
                s += v[j];
                j--;
                if (v[i] > v[j])
                {
                    d += v[i];
                    i++;
                }
                else
                {
                    d += v[j];
                    j--;
                }
            }
            if (i == j)
                s += v[i];
        }
    }

    cout << s << " " << d << endl;
}