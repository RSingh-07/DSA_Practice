#include<stdio.h>
int main(){
    int a =10;
    int *ptr = &a;
    printf("%d",&a);
    printf("\n"); 
    printf("%d",a); 
    printf("\n"); 
    printf("%d",ptr); 
    printf("\n"); 
    printf("%d",*ptr); 
    printf("\n"); 
    printf("%p",&ptr); // different address since it is the address of pointer
    return 0;
}

    // printf("%p", &a);     // (1)
    // printf("\n"); 
    // printf("%p", a);      // (2) ❌ wrong usage
    // printf("\n"); 
    // printf("%p", ptr);    // (3)
    // printf("\n"); 
    // printf("%p", *ptr);   // (4) ❌ wrong usage
    // printf("\n"); 
// %p expects an argument of type void*.
// If you pass an int (a or *ptr) to %p, you're violating the format specifier rules.
// This causes undefined behavior: It may still print something (like an address), but it's not reliable.