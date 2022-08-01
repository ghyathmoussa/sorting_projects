#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int ,int arr[]);
void print_array(int ,int arr[]);

int main(){
    int arr[] = {22,27,16,2,18,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("before sorting: ");
    print_array(n,arr);
    insertion_sort(n,arr);
    printf("after sorting: ");
    print_array(n,arr);

    return 0;
}

// Function to sort array
void insertion_sort(int n,int arr[]){
    int i,j,k;

    for(i=1;i<n;i++){
        k = arr[i];
        j = i-1;

        // if elemant greater than (k) replace their position
        while(j>=0 && arr[j] > k){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = k;
    }
}

// Function to print array 
void print_array(int n,int arr[]){
    int i;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}