#include <stdio.h>

int main() {
    int n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("Array needs at least 2 elements\n");
        return 0;
    }
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int largest, second_largest;
    
    if (arr[0] > arr[1]) {
        largest = arr[0];
        second_largest = arr[1];
    } else {
        largest = arr[1];
        second_largest = arr[0];
    }
    
    for(int i = 2; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    
    if(largest == second_largest) {
        printf("There is no distinct second largest element\n");
    } else {
        printf("Second largest element = %d\n", second_largest);
    }
    
    return 0;
}