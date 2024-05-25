#include <stdio.h>
#include <stdlib.h>

/*Kodun ciktisi nedir?*/

int main(){
    unsigned char a=224;             // 1 1 1 0 0 0 0 0  224
    unsigned char b=0;               // 0 0 0 0 0 0 0 0  0
    unsigned char c=32;              // 0 0 1 0 0 0 0 0  32
 
    unsigned char andSonuc1= a&b;    // 0 0 0 0 0 0 0 0  0
    unsigned char andSonuc2 = a &c;  // 0 0 1 0 0 0 0 0  32


    unsigned char orSonuc1=a | b;    // 1 1 1 0 0 0 0 0  224 
    unsigned char orSonuc2=a | c;    // 1 1 1 0 0 0 0 0  224

    unsigned char XorSonuc1= a ^ b;  // 1 1 1 0 0 0 0 0  224
    unsigned char XorSonuc2= a ^ c;  // 1 1 0 0 0 0 0 0  192

    unsigned char negA= ~a;          // 0 0 0 1 1 1 1 1  31    
    unsigned char negB = ~b;         // 1 1 1 1 1 1 1 1  255
    unsigned char negC =~c;          // 1 1 0 1 1 1 1 1  223

    printf("%d\n",andSonuc1);
    printf("%d\n",andSonuc2);
    printf("%d\n",orSonuc1);
    printf("%d\n",orSonuc2);
    printf("%d\n",XorSonuc1);
    printf("%d\n",XorSonuc2);
    printf("%d\n",negA);
    printf("%d\n",negB);
    printf("%d\n",negC);


}