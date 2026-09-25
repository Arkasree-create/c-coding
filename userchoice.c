#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g=0;
    printf("enter two numbers\n");
    scanf("%d %d", &a,&b);
    printf("enter choice\n", g);
    scanf("%d", &g);

    if(g==1){
        c=a+b;
        printf("the sum of two number is %d\n", c);

    }
    else if(g==2){
        d=a*b;
        printf("the product of two number is %d\n", d);

    }
    else if(g==3){
        e=a-b;
        printf("the difference of the two number is%d\n", e);

    }
    else if(g==4){
        f=a/b;
        printf("the quotient of the two number is%d\n", f);

    }
    else{
        printf("invalid choice");

    }
    return 0;

}