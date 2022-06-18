#include <stdio.h>
int main()
{
    // Integer variable
    int a = 10;
 
    // Pointer to an integer
    int *ptr1, *ptr2;
 
    // Pointer stores the address of variable a
    ptr1 = &a;
    ptr2 = &a;
 
    printf("Pointer ptr1 before Addition: ");
    printf("%p \n", ptr1);
 
    // Addition of 2 to pointer ptr1
    ptr1 = ptr1 + 2;
    printf("Pointer ptr1 after Addition: ");
    printf("%p \n", ptr1);
    printf("Pointer ptr2 before Subtraction : ");
    printf("%p \n", ptr2);
 
    // Subtraction of 2 from pointer ptr2
    ptr2 = ptr2 + 2;
    printf("Pointer ptr1 after Subtraction : ");
    printf("%p \n", ptr2);
    return 0;
}
