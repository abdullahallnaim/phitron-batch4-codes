#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> st;
    for(char c:s){
        st.push(c);
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
    return 0;
}
