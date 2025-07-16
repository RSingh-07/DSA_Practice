#include<stdio.h>
int main(){
    int a =10;
    //%p in printf() expects a void* pointer type, as per the C standard.
    printf("%p",(void*)&a); // 0061FF1C
    return 0;
}