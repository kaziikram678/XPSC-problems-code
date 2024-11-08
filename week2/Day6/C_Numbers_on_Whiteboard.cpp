#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;

    while(n--)
    {
        int m;
        cin>>m;

        priority_queue<int> pq;

        for(int i=1;i<=m;i++) pq.push(i);
        cout<<2<<endl;
        while(pq.size()>1)
        {
            int a = pq.top();
            pq.pop();
            cout<<a<<" ";
            int b = pq.top();
            pq.pop();
            cout<<b<<" ";
            
            int d = (a+b+1)/2;
            
            pq.push(d);
            cout<<endl;
        }


    }
    return 0;
}