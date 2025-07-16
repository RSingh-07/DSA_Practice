#include<stdio.h>

void right_rotate_optimised(int arr[], int n, int k){
    int temp[k];
    k%=n;
    for(int i=0;i<k;i++){
        temp[i] = arr[n-k+i];
    }
    
    for(int i= n-1;i>=k;i--){
        arr[i]=arr[i-k];
    }
    
    for(int i=0;i<k;i++){
        arr[i] = temp[i];
    }
    
    // Print rotated array
    printf("The rotated array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
   int arr[] = {1, 2, 3, 4, 5};
   int n=5, k=3;
   printf("The array elements are: ");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
       
    }
     printf("\n");

   right_rotate_optimised(arr, n, k);
  

    return 0;
}