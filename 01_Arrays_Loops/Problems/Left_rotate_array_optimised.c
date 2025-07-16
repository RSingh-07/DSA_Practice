#include<stdio.h>

void left_rotate_array(int arr[], int n, int k){
     k%=n;   //handle cases when k > n

     //step:1 Store first k elements in temp[]
     int temp[k];
     for(int i=0;i<n;i++){
        temp[i] = arr[i];
     }

     //step:2 shift the rest to left
     for(int i=0;i<n-k;i++){
        arr[i] = arr[i+k];
     }

     //step:3 copy temp elements at the end
     for(int i=0;i<k;i++){
        arr[n-k+i]=temp[i];
     }
      
     //print rotated array
     printf("The rotated array is: ");
     for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
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

    left_rotate_array(arr, n, k);
    return 0;
}