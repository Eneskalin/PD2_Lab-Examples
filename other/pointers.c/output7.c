#include <stdio.h>
#include <stdlib.h>
/*Kodun ciktisi*/

#include <stdio.h>

int main() {
    int A[] = {3, 6, 9, 12, 15}; // A[0] -> 142200
    int *ptr, **ptr_ptr; // &ptr=12120
    ptr = A; // ptr -> 142200

    printf("Output 1: %d\n", *(ptr + 2)); //9
    *(ptr + 3) -= 5; //7
    ptr += 2; // {3, 6, "9", 7, 15}
    printf("Output 2: %d\n", *(ptr + 1)); //7
    ptr_ptr = &ptr; // ptr_ptr=12120
    printf("Output 3: %d\n", *(*ptr_ptr + 4)); // 12124

    return 0;
}
