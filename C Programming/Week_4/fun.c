#include <stdio.h>

int a = 20, result;

void add_two(int c, int b)
{
    // a = 20008;
    result = c + b;
    // printf("%d\n", result);
}

int main()
{
    add_two(10, 12);
    printf("%d\n", a);
    // a = 100;
    printf("%d\n", a);
    // printf("%d\n", result);
    return 0;
}
