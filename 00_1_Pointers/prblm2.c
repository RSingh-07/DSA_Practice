//PREDICT OUTPUT
#include<stdio.h>
int main(){
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;

    printf("\n%d",*(ptr+1)); //20
    printf("\n%d",*(ptr+3)); //40
    ptr++;
    printf("\n%d",*ptr); //20
return 0;
}