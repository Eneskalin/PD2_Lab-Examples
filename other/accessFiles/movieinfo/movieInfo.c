#include <stdio.h>

typedef struct 
{
    char ad[100];
    char yonetmen[50];
    int yapimYili;
}Film;

int main(){
    Film film={"Contact","Robert Zemeckis",1997};
    char *dosyaAdi="film.bin";
    FILE* dosya=NULL;

    dosya =fopen(dosyaAdi,"wb+");

    if (dosya== NULL)
    {
        printf("Dosya acilamadi\n");
        return 0;

    }

    fwrite(&film,sizeof(Film),1,dosya);
    fclose(dosya);

    Film film1;
    dosya=fopen(dosyaAdi,"rb+");
    if (dosya==NULL)
    {
        printf("dosya okunamadi\n");
        return 0;
    }

    fread(&film1,sizeof(Film),1,dosya);
    fclose(dosya);

    printf("Okunan Film\n");
    printf("------------------------------------\n");
    puts(film1.ad);
    puts(film1.yonetmen);
    printf("%d",film1.yapimYili);

}
