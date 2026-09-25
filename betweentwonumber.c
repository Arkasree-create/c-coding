#include <stdio.h>
int main(){
    int a;
    printf("enter a number\n ");
    scanf("%d", &a);
    if(a>10 && a<50){
        printf("the number lies between 10 and 50");

    }
    else{
        printf("the number is not in the range of 10 to 50");

    }
    return 0;

}