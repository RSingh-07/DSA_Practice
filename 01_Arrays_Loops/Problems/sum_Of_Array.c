#include<stdio.h>

int sum_Of_Array(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int arr[100], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int res = sum_Of_Array(arr,n);
    
    printf("The sum of arrays is: %d", res);

    return 0;
}