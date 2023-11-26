#include <stdio.h>

int main()
{
    int row;
    scanf("%d", &row);
    int space = row - 1;
    for (int i = 1; i <= row; i++)
    {
        // space print er kaj korbo ekhane
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        // start print er kaj korbo ekhane
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        space--;
        printf("\n");
    }
    return 0;
}
