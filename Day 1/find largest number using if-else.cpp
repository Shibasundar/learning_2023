#include <stdio.h>

int findMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1 = 10, num2 = 20;
    int max = findMax(num1, num2);
    printf("Max number: %d\n", max);
    return 0;
}
