#include <stdio.h>

void max_min(int arr[], int n, int *max, int *min) {
    *max = *min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) *max = arr[i];
        if (arr[i] < *min) *min = arr[i];
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int max, min;
    max_min(arr, n, &max, &min);
    printf("Maximum: %d\nMinimum: %d\n", max, min);
    return 0;
}
