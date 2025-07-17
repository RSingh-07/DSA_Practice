#include<stdio.h>
#include<limits.h>
//prints all possible subarrays using brute force TC: O(n^3)
void printSubarrays(int arr[], int n){
    for(int start =0;start<n;start++){
        for(int end = start ; end < n; end++){
            for(int i=start;i<=end;i++){
                printf("%d", arr[i]);
            }
            printf(" ");
        }
        printf("\n");
    }
}

//Calculate maximum subarray sum using brute force but optimised to O(n^2) 
int maxSubArrSumBruteForce(int arr[], int n){
    int max_Sum = INT_MIN;
   for(int st=0;st<n;st++){
     int curr_Sum =0;
     for(int end = st;end<n;end++){
        curr_Sum+=arr[end];
        if(max_Sum<curr_Sum)
            max_Sum=curr_Sum;
     }
   }
   return max_Sum;
}

//Most optimised approach TC:O(n)
// Add numbers if curr_Sum < 0 , reinitialise curr_Sum to 0
int kadaneAlgo(int arr[], int n){
  int currSum=arr[0]; //Initialise yo first element to handle all negative values as well
  int maxSum = arr[0];
  for(int i=1;i<n;i++){
    if(currSum<0)
        currSum=arr[i]; //start new subarray
    else
        currSum+=arr[i]; // extend current subarray
    if(currSum>maxSum)
        maxSum  = currSum; //Update max sum if needed
  }
  return maxSum;
}

int main(){
    int arr[]={-5, -2, -3, -4, -1};
    int n=5;
    printSubarrays(arr, n);
    int maxsum = maxSubArrSumBruteForce(arr, n);
    printf("\nThe maximum sum is: %d",maxsum);
    int maxSumK = kadaneAlgo(arr, n);
    printf("\nThe maximum sum using Kadane's Algorithm is: %d",maxSumK);
    
    return 0;
}