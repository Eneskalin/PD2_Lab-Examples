#include <stdio.h>

double average(int array[], int x);

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    double result = average(array, 5);
    printf("%.2f", result);
    return 0;
}

double average(int array[], int x) {
    if (x == 0)
        return 0;
    else
        return (array[x - 1] + (x - 1) * average(array, x - 1)) / x;
}

// 4 + 4 * average(array,4)
// 3 + 3 * average(array,3) ()
// 2 + 2 * average(array,2) (1/2)
// 1 + 1 * average(array,1) (0)
// 0 + 0 * average(0)
