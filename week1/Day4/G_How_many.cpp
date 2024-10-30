// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
   // std::cout << "Try programiz.pro";
   int s,t;
   cin>>s>>t;
   int cnt=0;
   for(int i=0;i<=s;i++)
   {
       for(int j=0;j<=s;j++)
       {
           for(int k=0;k<=s;k++)
           {
               if(i+j+k<=s && i*j*k<=t)
               cnt++;
           }
       }
   }
   cout<<cnt<<endl;

    return 0;
}