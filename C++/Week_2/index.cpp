#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size() - 2; i++)
    {
        // 101 ba 010
        if ((s[i] == '1' and s[i + 1] == '0' and s[i + 2] == '1') or (s[i] == '0' and s[i + 1] == '1' and s[i + 2] == '0'))
        {
            cout << "GOOD" << endl;
            return 0;
        }
        cout << "Bad" << endl;
    }
    return 0;
}
