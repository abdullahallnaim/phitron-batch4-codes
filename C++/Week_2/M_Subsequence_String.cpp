#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string tmp = "hello";
    int j = 0;
    for (int i = 0; i < s.size(); i++){
        if(s[i] == tmp[j]){
            j++;
        }
    }
    if(j == 5){
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}
