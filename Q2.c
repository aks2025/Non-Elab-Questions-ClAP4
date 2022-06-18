#include <stdio.h>
int ascii(char a){

    printf("\n The ascii value of the a variable is : %d", a);  
    return 0;  
}
int main(){
 char a;
 printf("Enter a character");  
    scanf("%c",&a);  
    ascii(a);
}
