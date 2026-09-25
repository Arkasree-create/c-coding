#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter three numbers\n", a,b,c);
    scanf("%d %d %d", &a,&b,&c);

    if(a<b && a<c){
        printf("the smallest number is a in %d");
    
    }
    if(b<a && b<c){
        printf("the smallest number is b in %d");
    }
    else{
        printf("the smallest number is c in %d");
    }
    return 0;
}