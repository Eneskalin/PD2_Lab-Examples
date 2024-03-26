#include <stdio.h>

int main() {
    int array[3][3];
    
 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter [%d][%d]. term: ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }


    printf("Matris:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
