#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    scanf("%d", &a);
    char n[1000001];
    scanf("%s", n);
    int sum = 0;
    for (int i = 0; i < strlen(n); i++)
    {
        int val = n[i] - 48;
        sum += val;
    }
    printf("%d", sum);
    return 0;
}