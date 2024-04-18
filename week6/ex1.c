#include <stdio.h>
#include <stdlib.h>
/*Aşağıdaki kod parçasının ekran çıktısı ne olmalıdır?  */
int main(){
    int *ptr =(int *) malloc(5*sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        *(ptr+i)=i; // "0" 1 2 3 4

    }
    printf("%d\n",*ptr++);    // 0    0 "1" 2  3  4
    printf("%d\n",(*ptr)++);  // 1    2 "2" 2  3  4
    printf("%d\n",*ptr);      // 2    2 "2" 2  3  4
    printf("%d\n",*++ptr);    // 2    2  2 "2" 3  4
    printf("%d\n",++*ptr);    // 3    2  2  2 "3" 4

    
}
