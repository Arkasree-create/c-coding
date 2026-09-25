#include <stdio.h>
int main(){
    int a;
    printf("enter a number a\n");
    scanf("%d", &a);
    if (a%2==0){
        printf("it is even number");

    }
    else{
        printf("it is an odd number");
    }
    return 0;
    
}