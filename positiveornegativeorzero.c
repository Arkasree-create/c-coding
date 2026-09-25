#include <stdio.h>
int main(){
    int a;
    printf("enter a number a\n");
    scanf("%d", &a);
    if(a==0){
        printf("this number is zero");

    }
    else if(a<0){
        printf("this number is negative");

    }
    else{
        printf("this number is positive");

    }
    return 0;

}