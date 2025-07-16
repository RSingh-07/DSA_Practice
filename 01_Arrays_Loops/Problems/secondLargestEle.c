#include<stdio.h>
#include<limits.h>

int secondLargestEle(int arr[], int n){
    int first = INT_MIN;
    int second = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }else if(arr[i]>second && arr[i]<first){
            second = arr[i];
        }
    }
    return (second == INT_MIN) ? -1:second;
}


int main(){
    int arr[100], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    int res = secondLargestEle(arr,n);
    printf("The secoond largest number is : %d", res);

    return 0;
}