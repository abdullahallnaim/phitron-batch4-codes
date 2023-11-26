#include <stdio.h>
int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) // a theke b obdi loop cholteche
    {
        int num = i; // i ke store korlam num er moddhe
        int flag = 0; // eta track rakhbe je 4,7 ache ki na
        while (num != 0)
        {
            int digit = num % 10; // last digit nilam
            if (digit != 4 || digit != 7) // last digit ki 4 ba 7 na kina
            {
                flag = 1; // flag er value 1 kore barteche mane hocche amra 4 ba 7 pai nai
                
                break; // jehetu 4,7 pai nai tai break korlam
                
            }
            num /= 10; // num ke 10 diye vag kore choto kore fellam
        }
        // printf("%d ",num);
        if (flag == 0) // 4, 7 ke paichi amra
        {
            printf("%d ", i);
        }
    }
    return 0;
}


// 44
// 47
// 74
// 447