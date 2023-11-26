#include <stdio.h>

// 1 1 2 3 5 8 13 21
// 1 2 3 4 5 6 7 8 9

int fibo(int n)
{
    // base condition
    if (n <= 2)  
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fibo(n));
    return 0;
}
