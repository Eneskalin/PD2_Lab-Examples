#include <stdio.h>

/*Ogreni yas isim vize ve final notlarini tutan bir struct olusutun bu struct a kullanicidan belittigi sayi adar ogrenci aliniz 
ve bu verileri ve not ortlamasini  sonuclar.txt dosyasina yazin*/

typedef struct 
{
    int yas;
    char name[50];
    int midterm;
    int final;
}ogrenci;

int main(void){
    int choose;
    printf("Girmek istediginiz ogrenci sayisini giriniz\n");
    scanf("%d",&choose);
    ogrenci ogrci[choose];
    FILE *fileptr;
    fileptr=fopen("sonuclar.txt","w");
    if (fileptr == NULL)
    {
        printf("Dosya acilamadi\n");
        return 0;
    }
    


    for (int i = 0; i < choose; i++)
    {
        printf("%d . ogrencinin verisini giriniz[Yas - Isim - Vize Notu - Final Notu  ]\n",i+1);
        scanf("%d %s %d %d",&ogrci[i].yas,ogrci[i].name,&ogrci[i].midterm,&ogrci[i].final);
        float ortalma=0.4*ogrci[i].midterm + 0.6*ogrci[i].final;
        fprintf(fileptr,"Yas : %d Isim: %s Vize: %d Final: %d Ortalama: %.2f\n",ogrci[i].yas,ogrci[i].name,ogrci[i].midterm,ogrci[i].final,ortalma);
    }
    fclose(fileptr);
    return 0;
}