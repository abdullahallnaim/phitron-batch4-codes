#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int arr[26] = {0};
    for (int i = 0; i < s.size(); i++){
        // arr[s[i] - 'a']++;
        arr[s[i] - 'a'] = arr[s[i] - 'a'] + 1;
    }
    int flag = 1; // eta ekta pangram dhore nicchi
    for (int i = 0; i < 26; i++){
        if(arr[i] == 0){
            flag = 0;
            break;
        }
    }
    if(flag){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
        return 0;
}
