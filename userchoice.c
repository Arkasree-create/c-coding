#include <stdio.h>
int main(){
    int a,b,c=0;
    printf("enter two numbers\n");
    scanf("%d %d", &a, &b);
    printf("enter your choice\n");
    scanf("%d", &c);
    
    if (c == 1){
        c=a+b;
        printf("the sum of two number is %d", c);


    }
    else if(c == 2){
        printf("the product of two number is %d", a*b);
    }
    else if(c == 3){
        printf("the difference of two number is %d", a-b);
    }
    else if(c == 4){
        printf("the division of two numbers is %d", a/b);
    }
    else{
        printf("invalid choice");

    }
    return 0;
}