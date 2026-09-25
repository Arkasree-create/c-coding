#include <stdio.h>
int main(){
    int a,b;
    printf("enter 2 number a,b\n");
    scanf("%d , %d", &a,&b);
    if (a<b){
        printf("the largest number is %d\n", b);

    }
    else{
        printf("the largest number is %D\n", a);

    }
    return 0;

}