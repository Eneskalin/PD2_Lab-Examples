#include <stdio.h>
#include <stdlib.h>

// KOdun ciksisi nedir?

int main(){
    unsigned char a =224;    // 1 1 1 0 0 0 0 0     224
    printf ("%d\n", a>>2);   // 0 0 1 1 1 0 0 0     56 

    a=a<<1;                  // 1 1 0 0 0 0 0 0     192
    printf("%d\n",a);        //                     192
    a+= a>>3;                // 1 1 0 0 0 0 0 0 + 0 0 0 1 1 0 0 0
    printf("%d\n",a);        // 192 + 24 = 216
    return 0;
}