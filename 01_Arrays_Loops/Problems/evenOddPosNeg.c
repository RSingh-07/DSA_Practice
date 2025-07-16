#include<stdio.h>
#include<limits.h>

void evenOddPosNeg(int arr[], int n){
    int even=0, odd=0, pos=0, neg=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
        if(arr[i]>=0){
            pos++;
        }else{
            neg++;
        }
    }
    printf("The  number of even , odd , positive and negative numbers are: %d, %d, %d and %d", even, odd, pos, neg);
}
int main(){
    int arr[100], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    evenOddPosNeg(arr,n);

    return 0;
}