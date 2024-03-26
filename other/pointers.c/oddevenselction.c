#include <stdio.h>
#include <stdlib.h>

/*
Bir dizideki çift sayılara başa, tekleri sona başka bir dizi kullanmadan atan
algoritmayı çiziniz.
Örnek:
Giriş dizisi: 5 7 2 9 5 3 8 6
çıkış dizisi: 2 8 6 3 5 9 7 5*/

int main() {
    int array[] = {5, 7, 2, 9, 5, 3, 8, 6};
    int *ptr = array;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8 - i - 1; j++) { 
            if (ptr[j] % 2 != 0 && ptr[j + 1] % 2 == 0) {
                int temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 8; i++) {
        printf("%d ", *(ptr + i)); 
    }

    return 0;
}