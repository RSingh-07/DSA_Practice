#include<stdio.h>
#include<limits.h>

void minMaxElement(int arr[], int n){
    int max=INT_MIN, min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min)
            min=arr[i];
        if(arr[i]>max)
            max=arr[i];
    }
    printf("The maximum and minimum of arrays are: %d and %d", max, min);
}

int main(){
    int arr[100], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    minMaxElement(arr,n);

    return 0;
}