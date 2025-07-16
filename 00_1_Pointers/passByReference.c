#include<stdio.h>
void change(int *x){
    *x=100;
}
int main(){
    int a = 10;
    //change(a);
    change(&a);
    //printf("%d", a); //10 - pass by value
    printf("%d", a); //100 - pass address of a using pointers

    return 0;
}