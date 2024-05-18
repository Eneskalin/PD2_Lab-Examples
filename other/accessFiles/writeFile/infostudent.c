#include <stdio.h>
#include <stdlib.h>
/*Yasinizi Isminizi ve soy isminizi bir dosyaya yazdirin*/

int main(void){

    FILE *dosya;
    dosya=fopen("deneme.txt","w");
    if (dosya == NULL) {
        printf("Dosya acilamadi.");
        return 1;
    }

    fprintf(dosya, "%s\n", "21");
    fprintf(dosya, "%s", "Enes Kalin");

    fclose(dosya);
}