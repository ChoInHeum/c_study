#include <stdio.h>

int main() {
    int input_array[5] = {0};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &input_array[i]);
    }

    for (int i = 0; i < 5; i++) {
        sum += (input_array[i] * input_array[i]);
    }

    printf("%d", sum % 10);
}