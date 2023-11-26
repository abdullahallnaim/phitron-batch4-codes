#include <stdio.h>

// int Max(int i, int n, int *a){
//     // base case
//     if(i == n-1){
//         return a[i];
//     }
//     // recursive call
//     int mx = Max(i + 1, n, a);
//     if(a[i] > mx)
//         return a[i];
//     return mx;
// }

int Max(int n, int *a)
{
    // base case
    if (n == 0)
    {
        return a[0];
    }
    // recursive call
    int mx = Max(n - 1, a);
    if (a[n] > mx)
        return a[n];
    return mx;
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("%d\n", Max(n - 1, ar));
    return 0;
}
