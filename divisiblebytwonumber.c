#include <stdio.h>
int main(){
    int a;
    printf("enter a number which is divisible by 3 and 8\n");
    scanf("%d", &a);

    if( a%3==0 && a%8==0 ){
        printf("it is valid");
    }
    else{
        printf("the number is not valid");
    }
    return 0;

}