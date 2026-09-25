#include <stdio.h>
int main(){
    int b,h,a;
    printf("enter base of the triangle b\n");
    scanf("%d", &b);

    printf("enter height of the triangle h\n");
    scanf("%d", &h);

    a=(b*h)/2;

    printf("the area of triangle is %d", a);

    return 0;

}