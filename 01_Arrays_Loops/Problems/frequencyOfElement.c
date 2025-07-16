#include<stdio.h>

void frequencyOfElements(int arr[], int n){
    int visited[n],i;  //to track if index i has been processed

    //Initialise visited array to 0
    for(int i=0;i<n;i++){
        visited[i] = 0;
    }


    for(int i=0;i<n;i++){
        //If already counted, Skip
        if(visited[i]==1)
            continue;  //skips a particular iteration
    
        int freq=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                freq++;
                visited[j]=1; //mark 1 to avoid re=processing
            }
        } 
        printf("The frequency of number %d is: %d \n",arr[i],freq);   
    }
}


int main(){
    int arr[100], n;
    //Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    //input array elements
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    frequencyOfElements(arr, n);

    return 0;
}