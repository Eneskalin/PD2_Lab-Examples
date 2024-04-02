#include <stdio.h>
// Kodun ciksi nedir?

int main(){
    int i;
    char *ptr,karakterdizisi[12]="heryonuylec";
    ptr = karakterdizisi;
    for ( i = 0; i < 4; i++)
        *(ptr++)=karakterdizisi[i+7]; // ptr=lec

    for ( i = 0; i < 4; i++)
        karakterdizisi[i]=*(ptr++); // karakterdizisi=onulonuylec
        puts(karakterdizisi); //onulonuylec
        puts(ptr);  //lec
    
    return 0;
    


}