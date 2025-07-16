#include<stdio.h>

void left_rotate_array(int arr[], int n, int k){
     int temp;
    for(int i=0;i<k;i++){
        
        //store first element
        temp=arr[0];
        
        //shift elements to left
        for(int j=0;j<n;j++){
            arr[j]=arr[j+1];
        }
    arr[n-1]=temp;
    }
    printf("The rotated elements are: ");
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

    left_rotate_array(arr, n, k);
    return 0;
}