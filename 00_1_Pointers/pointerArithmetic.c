#include<stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int a =10;
    int *ptr =&a;

    printf("\n%p",ptr);
    
    
    printf("\nINCREMENT DECREMENT OPERATIONS\n");
    ptr++; //increment by datatype size
    printf("\n%p", ptr); // +4
    ptr--; //decrement by datatype size
    printf("\n%p", ptr); // -4
    
    
    printf("\nADDITION SUBTRACTION OPERATIONS\n");
    ptr = ptr+2;
    printf("\n%p", ptr); // +8
    
    printf("\n%p",arr+1); //same as printf("\n%p", ptr++); 
    printf("\n%d",*arr+1); //2
    
    printf("\nARITHMETIC OPERATIONS BETWEEN TWO POINTERS\n");
    // In C:
    // You can subtract or compare two pointers of the same type that point into the same array or contiguous memory block.
    // The result is how many elements apart the two pointers are.
    // You cannot add two pointers or multiply them — it's undefined behavior.
    
    printf("\nSUBTRACTION BETWEEN TWO POINTERS\n");
    int *ptr2 ;  //100
    int *ptr3 = ptr2 + 2; //108
    printf("%p",ptr3 - ptr2); //2 number of bytes as in 2 integers
    
    printf("\nCOMPARISON BETWEEN TWO POINTERS\n");  //<, <=, >, >=, ==, !=
    int *ptr4;
    int *ptr5;

    //less than 
    printf("\n%p",ptr4);
    printf("\n%p",ptr5);
    printf("\n%p", ptr5<ptr4); //0 - false
    
    //equal to
    int *ptr6 = ptr4;
    printf("\n%p",ptr4 == ptr6); //1 - true



    
    return 0;
}