#include <stdio.h>
//10 elemanlı bir sayı dizisinin en büyük ve en küçük elemanlarını veyerini bulan rescurisive fonksiyon yazin. 

void findposition(int[], int, int, int);

int main() {
    int a[10] = {1, 6, 8, 4, 53, 9, 33, 22, 31, 10};
    findposition(a, 10, a[0], a[0]);
    return 0;
}

void findposition(int a[], int x, int max, int min) {
    if (x == 0) {
        printf("Max value's position: %d\n", max);
        printf("Min value's position: %d\n", min);
        return;
    } else {
        if (a[x - 1] > a[max - 1]) {
            max = x;
        }
        if (a[x - 1] < a[min - 1]) {
            min = x;
        }
        findposition(a, x - 1, max, min);
    }
}