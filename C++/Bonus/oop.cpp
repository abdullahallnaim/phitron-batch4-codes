#include<bits/stdc++.h>
using namespace std;
// STL == Standard Template Library 
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n;i++){
        cin >> arr[i];
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }

    sort(arr, arr + n);

    // cout << arr[0] << " " << arr[n-1] << endl;
    swap() // 
    return 0;
}
