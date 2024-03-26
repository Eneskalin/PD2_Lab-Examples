#include <stdio.h>
/*Aşağıda verilen program da tanımlı A dizisinin boyutu 10 ve dizinin başlangıç adresi öğrenci numaranızdır. Dizinin elemanları öğrenci numaranızın
ters sırada diziye yerleştirilmiş halidir. int veri tipi bellekte 4 bayt yer kaplamaktadır. Bu bilgilere göre aşağıda verilen programın ekran çıktısını
yazınız.
Assume for the program given below that the size of array A is 10 and beginning address of the array A is your student number. The elements of
the array are your student number placed in the array in the reverse order. Data type of int is stored in 4 bytes in memory. According to this
information, write the output of the program given below.
*/

int main(){
    int A[10]={0,1,0,5,0,2,0,1,2,2}; // &A[0]=2210205010 A={0,1,0,5,0,2,0,1,2,2}
    int *m,**k;
    m=A;
    printf("First adress  %d\n",m); 
    printf("Output 1: %d\n",*(m+1)); //1
    *(m+2)+=3;
    m+=4;
    printf("Output 2:%d\n",(m+1)); // 2210205030
    m=&A[1];
    k=&m;
    printf("Output 3: %d\n",*(*(k)+1)); // *k-> &m -> (m+1) -> 3
    printf("Output 4: %d\n",*k); // *k ->&m ->2210205014
    m=m-1;
    printf("Output 5: %d\n",*k); // *k -> &m [0] -> 2210205010


}