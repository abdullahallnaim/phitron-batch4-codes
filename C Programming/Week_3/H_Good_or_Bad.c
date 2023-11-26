#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        char ch[100003];
        scanf("%s", ch);
        int cnt = 0;
        // 101 ba 010 ke khuje ber koray kaj
        for (int i = 0; i<strlen(ch); i++){
            if ((ch[i] == '1' && ch[i + 1] == '0' && ch[i + 2] == '1') || (ch[i] == '0' && ch[i + 1] == '1' && ch[i + 2] == '0')){
                cnt = 1;
            }
        }
        if(cnt > 0)
            printf("Good\n");
        else
            printf("Bad\n");
    }
    return 0;
}
