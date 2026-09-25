#include <stdio.h>
int main(){
    int a,i=1,b;
    printf("enter a number \n");
    scanf("%d", &a);

    if(a<=1){
        b=0;
    
    }
    else{
        for(b = 2 ; b<= a/2; b++){
            if(a%b==0){
                i=0;
                break;
            }

        }
    }

    if(a=1){
        printf("%d is prime number");
    }
    else{
        printf("%d is not prime number");
    }
    return 0;
}