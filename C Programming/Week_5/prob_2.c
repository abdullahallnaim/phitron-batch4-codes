#include<stdio.h>

int int_reverse(int n, int c){
    // base case
    if(n == 0)
        return c;

    c = c * 10 + n % 10; // c = 0 + 4 = 4
    return int_reverse(n / 10, c); // vai amader number ke 10 diye vag korte thako
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", int_reverse(n, 0));
    return 0;
}
