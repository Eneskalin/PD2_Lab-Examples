#include <stdio.h>
#include <stdlib.h>

int *assemblyArray(int [], int, int [], int);

int main() {
    int liste_1[5] = {6, 7, 8, 9, 10};
    int liste_2[7] = {13, 7, 12, 9, 7, 1, 14};
    int *ptr;
    ptr = assemblyArray(liste_1, 5, liste_2, 7);
    for (int i = 0; i < 12; i++) {
        printf("%d\n", ptr[i]);
    }

    return 0;
}

int *assemblyArray(int liste_1[], int x, int liste_2[], int y) {
    int i, j, temp;
    int *ptr2 = (int *)malloc((x + y) * sizeof(int));
    for (i = 0; i < x; i++) {
        ptr2[i] = liste_1[i];
    }
    for (j = 0; j < y; j++, i++) {
        ptr2[i] = liste_2[j];
    }

    for (i = 0; i < x + y - 1; i++) {
        for (j = 0; j < x + y - i - 1; j++) {
            if (ptr2[j] > ptr2[j + 1]) {
                temp = ptr2[j];
                ptr2[j] = ptr2[j + 1];
                ptr2[j + 1] = temp;
            }
        }
    }

    return ptr2;
}
