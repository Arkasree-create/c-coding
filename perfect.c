#include <stdio.h>
int main(){
    int a,b,g=0;
    printf("enter a number \n");
    scanf("%d", &a);

    for(b=1; b<=a/2; b++ ){
        if(a%b==0){
            g=g+b;
        }
    }

    if(g==a && a>0){
        printf("%d is perfect number", g);
    }
    else{
        printf("%d is not perfect number", g);
    }

    return 0;
}