#include <stdio.h>

/*Soru 4: Aşağıda verilen program da tanımlı myArray dizisi 012FFA78 adresinde tutulmaktadır. double
veri tipi bellekte 8 bayt yer kaplamaktadır. Bu bilgilere göre aşağıda verilen programın ekran çıktısını,
yandaki alana hazırlayınız
Question 4: Given myArray is stored in adress 012FFA78. Data type of double is stored in 8 bytes in
the memory. Accordingly, prepare the output of the given program.
*/
void main(){
    double *m, **k,myArray[5]={1.0,2.0,3.0,4.0,5.0}; //  &k =222 &myArray=100 108 116 124 132 140
    m = myArray; //m=100
    printf("%.1f\n",*(m+1)); //2.0
    *(m+3)+=3.86; // {(1.0),2.0,3.86,4.0,5.0}
    m+=2; //{1.0,2.0,3.0,(7.86).0,5.0}
    printf("%.1f\n",*(m+1)); // 7.86

    m=&myArray[3];  // m= 124
    k=&m; //k=124
    printf("%.1f\n",*(*(k)-1)); //3.86
    printf("%p\n",*k); //124

    m=m-1; // m=124=>132
    printf("%p",m);  //132
}

