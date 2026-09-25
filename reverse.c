#include <stdio.h>
int main(){

    int a,s=0;
    printf("enter a number a\n");
    scanf("%d", &a);
    s=s+((a%10)*100);
    a=a/10;
    s=s+((a%10)*10);
    s=s+(a/10);
    printf("the reverse of the number is %d\n", s);
    return 0;

}