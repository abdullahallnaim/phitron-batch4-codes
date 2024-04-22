#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int height[N];
int dp[N];

int frog(int i)
{ // i = 5
    if (i == 0)
        return 0;
    // jodi age take dekhe feli, dekhchi age
    if(dp[i] != -1){
        return dp[i];
    }
    int cost = INT_MAX;
    // way 1 = ek lafe chole asbo 4 --> 5 asbo
    cost = min(cost, frog(i - 1) + abs(height[i] - height[i - 1]));
    // way 2 = dui lafe chole asbo 3 --> 5 asbo
    if (i > 1)
        cost = min(cost, frog(i - 2) + abs(height[i] - height[i - 2]));
    return dp[i] = cost;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    memset(dp, -1, sizeof(dp));
    cout << frog(n - 1);
    return 0;
}
