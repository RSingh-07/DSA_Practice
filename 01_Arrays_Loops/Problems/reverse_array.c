#include<stdio.h>
#include<limits.h>

void swap(int *a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse_Array(int arr[], int n){
    int j=n-1,i=0;
    for(i=0;i<n;i++){
        while(i<j){
            swap(&arr[i], &arr[j]);
            i++;
            j--;
        }
    }
    printf("The reversed array is : ");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf(" ");
    }
}

int main(){
    int arr[100], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
   
    reverse_Array(arr, n);
    return 0;
}