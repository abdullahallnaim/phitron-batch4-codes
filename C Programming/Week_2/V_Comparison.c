#include<stdio.h>

int main()
{
    int a, b;
    char c;
    scanf("%d %c %d", &a, &c, &b);
    // printf("%d %c %d", a, c, b);
    if(c == '>'){
        if(a>b){
            printf("Right");
        }
        else{
            printf("Wrong");
        }
    }
    else if(c == '<'){
        if(a<b){
            printf("Right");
        }
        else{
            printf("Wrong");
        }
    }
    else if(c == '='){
        if(a == b){
            printf("Right");
        }
        else{
            printf("Wrong");
        }
    }
    return 0;
}
