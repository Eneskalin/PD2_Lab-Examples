#include <stdio.h>
#include <stdlib.h>

/*İlk önce kullanıcıdan kaç adet sayı gireceğini soran daha sonra bu girilen sayı kadar calloc ile alan ayıran dizideki tek ve çift
sayıları ayrı ayrı yazdıran programı yazın*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arraysize, *ptr, *evenptr, *oddptr;
    int evencounter = 0, oddcounter = 0;

    printf("Enter array size: ");
    scanf("%d", &arraysize);

    ptr = (int *)calloc(arraysize, sizeof(int));

    evenptr = (int *)calloc(arraysize, sizeof(int));
    oddptr = (int *)calloc(arraysize, sizeof(int));

    for (int i = 0; i < arraysize; i++) {
        printf("Enter %d. term: ", i + 1);
        scanf("%d", &ptr[i]);

        if (ptr[i] % 2 == 0) {
            evenptr[evencounter++] = ptr[i];
        } else {
            oddptr[oddcounter++] = ptr[i];
        }
    }

    printf("Odd numbers in array: ");
    for (int i = 0; i < oddcounter; i++) {
        printf("%d ", oddptr[i]);
    }
    printf("\n");

    printf("Even numbers in array: ");
    for (int i = 0; i < evencounter; i++) {
        printf("%d ", evenptr[i]);
    }
    printf("\n");

    free(ptr);
    free(evenptr);
    free(oddptr);

    return 0;
}

    