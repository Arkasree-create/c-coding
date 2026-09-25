#include <stdio.h>
int main(){
    char ch;
    printf("enter a character\n");
    scanf("%c", &ch);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ){
                printf("the character is a vowels\n");

        }
        else{
            printf("the character is consonent\n");

        }

    }
    else{
        printf("the given character is not valid");
    }
    return 0;
}
        
