#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 20, 40, 20, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 20;
    int new_n = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != x) arr[new_n++] = arr[i];
    }
    printf("Updated Array: ");
    for (int i = 0; i < new_n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
