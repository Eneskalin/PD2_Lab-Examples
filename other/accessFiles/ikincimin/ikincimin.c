#include <stdio.h>
#include <stdlib.h> 

/*Bir grup öğrenciye ait bilgiler aşağıda verilen struct ile rastgele erisimli bir dosyada tutulmaktadır. Dosyada bilgileri
tutulan öğrencilerden en dusuk ikinci final notuna sahip öğrencinin ekrana basan ve prototipi aşağıda 
verilen ikinciMin isimli bir fonksiyon yazınız.

FONKSIYON PROTOTIPI                  KULLANILACAK YAPI 
void  ikinciMin(File *)                struct ogrenci{
                                    int numara;
                                    float final;
                                    char ad[40];
                                   };


*/
struct ogrenci{
    int numara;
    float final;
    char ad[40];
    };

void ikinciMin(FILE *fileptr){
    struct ogrenci min1,min2,current;
    fseek(fileptr,sizeof(struct ogrenci),SEEK_SET);
    fread(&min1, sizeof(struct ogrenci), 1, fileptr);
    fread(&min2, sizeof(struct ogrenci), 1, fileptr);
    while (!feof(current))
    {
        if (current.final<min2.final)
        {
            if (current.final<min1.final)
            {
                min1=current;
            }
            else{
                min2=current;
            }
            
        }
    }

    printf("%d %.2f %s",min2.numara,min2.final,min2.ad);
    
    
}