#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    string s1, s2;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> s1 >> s2;
        x = s1.size();
        y = s2.size();
        char ch1 = s1[x - 1];
        char ch2 = s2[y - 1];
        if (ch1 > ch2)
            cout << "<" << endl;
        else if (ch1 < ch2)
            cout << ">" << endl;
        else if (ch1 == 'S' && x > y)
            cout << "<" << endl;
        else if (ch1 == 'S' && x < y)
            cout << ">" << endl;
        else if (ch1 == ch2 && x > y)
            cout << ">" << endl;
        else if (ch1 == ch2 && x < y)
            cout << "<" << endl;
        else
            cout << "=" << endl;
    }
}