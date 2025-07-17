//PREDICT OUTPUT
#include<stdio.h>
int main(){
    int a = 5;
    int *p = &a;
    int **q = &p;

    printf("\n%d", *p);  //5
    printf("\n%d", **q); //5
    printf("\n%p", p); //address of a
    printf("\n%p", *q); //value of pointer p (address of a)

   
return 0;
}