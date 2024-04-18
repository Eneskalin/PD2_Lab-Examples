#include <stdio.h>
#include <stdlib.h>

/*Kendisine parametre olarak gonderilen satir ve sutunlara uygun olarak iki boyutlu bir sifir
matrisi olusturup bu matrisii donduren fonksiyon ve bu fonksiyonu kullanan bir progmram yaziniz
Bu matrisi callo fonksiyonu araciligla olusturunuz*/
int **sifirMatrisiOlustur(int satir,int sutun);

int main(void){
    int satir,sutun,**zeroMatrix;
    printf("Satir sayisi giriniz:");
    scanf("%d",&satir);
    printf("Sutun sayisini giriniz:");
    scanf("%d",&sutun);
    zeroMatrix=sifirMatrisiOlustur(satir,sutun);
    for (int i = 0; i < sutun; i++)
    {
        for (int j = 0; j < satir; j++)
        {
        printf("%d",zeroMatrix[i][j]);
        }
        printf("\n");
        
    }
    
}



int **sifirMatrisiOlustur(int satir,int sutun){
    int **ptr,*ptrsatir,*ptrsutun;
    ptr=(int *)malloc(sizeof(int*)*satir);
    for (int i = 0; i < satir; i++)
    {
        ptr[i]=(int *)malloc(sizeof(int*)*sutun);
    }

    for (int j = 0; j < satir; j++)
    {
        for (int k = 0; k < sutun; k++)
        {
            ptr[j][k]=0;
        }
        
    }
    
    
    return ptr;


}