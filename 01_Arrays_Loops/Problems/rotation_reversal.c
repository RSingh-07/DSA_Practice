#include <stdio.h>

// Reverse helper
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
        start++;
        end--;
    }
}

void left_rotate_reversal(int arr[], int n, int k) {
    k %= n;

    // Step 1: Reverse first k elements
    reverse(arr, 0, k - 1);

    // Step 2: Reverse remaining elements
    reverse(arr, k, n - 1);

    // Step 3: Reverse whole array
    reverse(arr, 0, n - 1);


    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}


int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int k=2;
    left_rotate_reversal(arr, n, k);
    return 0;
}