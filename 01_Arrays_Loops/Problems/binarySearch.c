#include<stdio.h>

int binarySearch(int arr[], int n, int target){
    int left = 0, right = n-1, mid;
    while(left<=right){
        mid = (left+right)/2;   //divide serach space into two halves
        if(arr[mid]==target){  // compare mid ele with target
            return mid;
        }
        else if(arr[mid]<target){ //if key is less than mid then left side is used for search 
            left = mid+1;
        }else{
            right = mid-1; // else right side 
        }
    }
    return -1;
}

//In recursive method the base condition would be 
// if(arr[mid]==x)
//     return mid;
// recursive functions would be 
// if(arr[mid]<x)
//    binarySearch(arr,mid+1,right,x)
// if(arr[mid]>x)
//     binarySearch(arr,left,mid-1,x)


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
    int res = binarySearch(arr, n, target);

    //print the output
    printf("The element is found at: %d", res);
    return 0;
}