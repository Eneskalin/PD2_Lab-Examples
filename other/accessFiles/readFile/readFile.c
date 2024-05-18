#include <stdio.h>
#include <stdlib.h>


int main(void){
    char ch;
    FILE *dosya=fopen("yollarinSonu.txt","r");
    if (dosya==NULL){
    printf("Dosya acilamadi");
    return 0;
    }

    do
    {
        ch=getc(dosya);
        printf("%c",ch);
    } while (ch!=EOF);
    
    fclose(dosya);

    return 0;
}