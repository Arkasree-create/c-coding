#include <stdio.h>
int main(){
    int a,b,c,g=0;
    printf("enter a nunber \n");
    scanf("%d", &a);
    b=a;
    while(a!=0){
        c=a%10;
        g=g*10+c;
        a=a/10;

    }
    if(b == g){
        printf("%d is palindrome number\n", b);
    }
    else{
        printf("%d is not palindrome number\n", b);
    }

    return 0;


}