*/ 8. Sort the array into ascending order. 
NAME:-MONU KUMAR PATEL
ENROLL:-92500527141

#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
            printf("Enter elements %d :\n", n );
    for(i = 0; i < n; i++) {
            printf("Enter elements %d :",i + 1 );
        scanf("%d", &arr[i]);
    }

    // Sort array in ascending order
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Display sorted array
    printf("Array in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
