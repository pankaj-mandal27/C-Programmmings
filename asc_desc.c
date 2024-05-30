#include <stdio.h>

int main() {
    int arr[20], n = 20, i, j, temp;
    
    // get inputs from user
    printf("Enter 20 integer values:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // sort in ascending order
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    // print sorted array in ascending order
    printf("In ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // sort in descending order
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] < arr[j+1]) {
                // swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    // print sorted array in descending order
    printf("In descending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
