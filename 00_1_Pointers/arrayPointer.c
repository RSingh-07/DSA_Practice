//Array pointers

#include<stdio.h>
int main(){
    int arr[]={1, 2, 3, 4, 5};
    
    printf("%p",arr); //address
    printf("\n%d",*arr); //1
    printf("\n%d",arr[0]); //1
    printf("\n%p",(void*)&arr[0]); //address
    return 0;
}