#include<stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int a =10;
    int *ptr =&a;
    printf("\n%p",ptr);

    ptr++; //increment by datatype size
    printf("\n%p", ptr); // +4
    ptr--; //decrement by datatype size
    printf("\n%p", ptr); // -4
    
    ptr = ptr+2;
    printf("\n%p", ptr); // +8
    return 0;
}