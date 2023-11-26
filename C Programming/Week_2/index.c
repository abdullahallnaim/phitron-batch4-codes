#include<stdio.h>

int main()
{
    int x = 79;
    if(x >= 80 && x<= 100){
        printf("A+");
    }
    else if(x >= 70 && x <= 79){
        printf("A");
    }
    else if(x >= 60 && x <= 69){
        printf("A-");
    }
    else{
        printf("fail");
    }
    // int taka = 500;
    // if(taka >= 500){
    //     printf("Fuska Khabo");
    // }
    // if(taka > 300){
    //     printf("Icecream khabo");
    // }
    // if(taka % 5 == 0){
    //     printf("chocolate khabo");
    // }
    return 0;
}
