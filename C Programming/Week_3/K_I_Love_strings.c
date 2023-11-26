#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d", &t);
    // getchar();
    while(t--){
        char s1[60], s2[60];
        scanf("%s %s", s1, s2);
        int a = strlen(s1), b = strlen(s2);
        int mx = a;
        if(b > mx){
            mx = b;
        }
        for (int i = 0; i < mx; i++){
            if(i<a){
                printf("%c", s1[i]);
            }
            if(i<b){
                printf("%c", s2[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
