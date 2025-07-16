// Pointer to Pointer(Double Pointer)

#include<stdio.h>
int main(){
    int a =10;
    int *p = &a;
    int **pp = &p;

    printf("%d", **pp); //**pp dereferences twice: pointer to pointer to value.
    printf("\n");
    //dereference operator - *
    printf("%d", *(&a)); 
    printf("\n");
    printf("%d",*(pp));
    printf("\n");
    printf("%p",(pp));

    return 0;
}