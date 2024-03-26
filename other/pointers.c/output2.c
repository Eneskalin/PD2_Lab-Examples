#include <stdio.h>

/*Aşağıda verilen programda tanımlı A dizisi 142236 adresinde tutulmaktadır. int veri tipi bellekte 4 bayt yer kaplamaktadır. Bu bilgilere
göre aşağıda verilen programdaki ekran çıktıları ne olmalıdır?

sume for the program given below that first element of array A is stored at address 142236 and data type int is stored in 4 bytes in
memory. According to this information, what should be the screen outputs in the program given below? */

void main(){
    int A[]={5,1,9,6,3,8,2,4,7}; //A[0]-> 142236
    int *m,**k;
    m=A; // m=> 142236
    printf("Output 1:%d\n",*(m+2)); // 9
    *(m+4)+=2; // A[]={5,1,9,6,5,8,2,4,7}
    m+=2;  //  A[]={5,1,(9),6,5,8,2,4,7}
    printf("Output 2: %d\n",(m+3));  // A[]={5,1,9,6,5,(8),2,4,7} 142236-142240-142244-142248-142252-(142256)
}