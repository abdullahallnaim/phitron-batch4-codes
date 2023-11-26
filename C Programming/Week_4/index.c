#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a; // reference korchi
    printf("%d %d\n", &a, p);
    *p = 100;
    printf("%d %d\n", a, *p); // dereference korchi
    // int b = &a;
    // printf("%d %d\n", &a, b);
    // printf("%d %d\n", a, *b);
    return 0;
}
