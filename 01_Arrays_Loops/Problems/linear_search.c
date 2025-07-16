#include<stdio.h>

int linearSearch(int arr[], int n, int target){
    //iterate through all elements
    for(int i=0;i<n;i++){
        //compare with each array ele
        if(arr[i] == target){
            return i; // if found
        }
    }
    // if not found
    return -1;
}

int main(){
    int arr[100], n, target;
    //Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    //input array elements
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    //input target to be searched
    printf("Enter element to be searched: ");
    scanf("%d", &target);

    //call function
    int res = linearSearch(arr, n, target);

    //print the output
    printf("The element is found at: %d", res);
    return 0;
}