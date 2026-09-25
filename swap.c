#include <stdio.h>
int main(){
    int a,b;
    printf("enter two numbers a,b\n");
    scanf("%d %d", &a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("current value of a is %d and current value of b is %d", a,b);

    return 0;
}