#include <stdio.h>
int main(){
    int a,b,c,g=0;
    printf("enter a number \n");
    scanf("%d", &a);
    b=a;

    while(a>0){
        c=a%10;
        int fact=1;
        for(int i = 1; i<= c; i++){
            fact=fact*i;
        }
        g=g+fact;
        a=a/10;

    }
    if (g==b){
        printf("%d is strong number\n", b);
    }
    else{
        printf("%d is not a strong number\n ", b);
    }

    return 0;
}