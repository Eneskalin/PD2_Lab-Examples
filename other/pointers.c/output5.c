#include <stdio.h>

/*Kodun ciktisi nedir?*/

int main(void){
    char *ptr1,*ptr2;
    char karakterdizisi[]="karaman"; //karakterdizisi=karaman

    for (ptr1=karakterdizisi; *ptr1 != '\0';ptr1++) //ptr1=(k)araman -> k(a)raman -> ka(r)aman  -> kar(a)man -> kara(m)an ->karam(a)n -> karama(n)
    {
        for (ptr2=ptr1; *ptr2!='\0';ptr2++)  // ptr2 =(k)  (a)  (r)  (a)  (m)  (a)  (n)
        {
            if (*ptr1==*ptr2)
            {
                puts(ptr2); //karaman -> araman ->raman ->aman ->man ->an ->n
            }
            
        }
        
    }

    return 0;
}