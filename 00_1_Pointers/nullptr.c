#include<stdio.h>
int main(){
    // A pointer that doesnt point to any location.
    int *ptr ;
    printf("%p",ptr); //ptr declared but not initialised, so garbage address
    printf("\n");
    int *ptr2 = NULL;
    //printf("%d",*ptr); // never dereference an uninitialized pointer.
    printf("\n");
    printf("%p",ptr2); // 0000000
    printf("\n");
    printf("%d",*ptr2); //segmentation fault/crash
    return 0;
}