#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // // cin.ignore();
    // getchar();
    // string word;
    // getline(cin, word);
    // cout << n << endl;
    // cout << word << endl;
    while(n--){
        string s;
        cin >> s;
        int flag = 1; // eta ekta palindrome string
        for (int i = 0, j = s.size() - 1; i < j; i++, j--)
        {
            if (s[i] != s[j])
            {
                flag = 0; // eta vuleo palindrome hobe na;
                break;
                // jkhn kono test case thakbe na tokhn use korte parbo
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" <<  endl;
    }
    return 0;
}
