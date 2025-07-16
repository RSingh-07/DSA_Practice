#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int n){
    int swapped ;  //for optimization
    for(int i=0;i<n;i++){
        swapped = 0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){  //compare 2 elements
                swap(&arr[j], &arr[j+1]);  //swap largest with smallest
                swapped = 1;
            }
        }
        if(swapped==0)
            break; // array is already sorted
    }
    printf("The sorted array is: ");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[]={4, 1, 5, 2, 3};
    int n=5;
    printf("The array before sorting is: ");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    bubble_sort(arr, n);
    
    return 0;
}