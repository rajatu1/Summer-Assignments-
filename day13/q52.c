#include <stdio.h>

int main() {
    int n;
    int even_count = 0;
    int odd_count = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    printf("Even elements count = %d\n", even_count);
    printf("Odd elements count = %d\n", odd_count);
    
    return 0;
}