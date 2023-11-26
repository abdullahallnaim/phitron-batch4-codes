#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        int freq[26] = {0};
        string s;
        cin >> s;
        int cnt = 0; // total kotogula ballon pabe
        for(char i:s){
            // oi problem ta age keu solve korche kina
            // jodi solve kore taile
            if(freq[i-'A'] == 1){
                cnt += 1;
            }
            // jodi solve na kore tail
            else{
                cnt += 2;
                freq[i - 'A'] = 1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
