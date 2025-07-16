#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[], int n){
    for(int i=0;i<n-1;i++){

        //unsorted part starting
        int smallest_idx = i; 

        //inner loop to find smallest element in unsorted part
        for(int j=i+1;j<n;j++){
            //if smallest ele found, update smallest index
            if(arr[j]<arr[smallest_idx]){
                smallest_idx=j;
            }
        }
        //swap smallest ele with first ele of unsorted part
        swap(&arr[i],&arr[smallest_idx]);
    
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
    selection_sort(arr, n);
    
    return 0;
}