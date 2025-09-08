#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 30, new_val = 99;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            arr[i] = new_val;
            break;
        }
    }
    printf("Updated Array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
