#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int isGood = 0; // 101, 010 string er moddhe nai
        // bool isGood = false;
        for (int i = 0; i < s.size()-2; i++){
            // 101 ba 010
            if ((s[i] == '1' and s[i + 1] == '0' and s[i + 2] == '1') or (s[i] == '0' and s[i + 1] == '1' and s[i + 2] == '0'))
            {
                isGood = 1;
                break;
            }
        }
        if(isGood == 1){
            cout << "Good" << endl;
        }
        else
            cout << "Bad" << endl;
    }
    return 0;
}
