#include<stdio.h>

void right_rotate(int arr[], int n, int k){
    int temp;
    //store last element
    for(int i=0;i<k;i++){
        temp = arr[n-1];
    
        //shift elements to right
        for(int i=n-1;i>=0;i--){
        arr[i] = arr[i-1];
        }
        //place last element at first
            arr[0] = temp;
    
    }
    //print rotated array
    printf("The rotated array is: ");
    for(int i=0;i<n;i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[100],n,k;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter aarray elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter number of times to rotate: ");
    scanf("%d",&k);

    right_rotate(arr, n, k);
    return 0;
}