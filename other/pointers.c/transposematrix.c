#include <stdio.h>
#include <stdlib.h>

/*Kullanicidan dinamik bellek yonetimi ile alinan matrisin transpozesini yazan programi yazin.*/
void matrisYazdir(int **,int,int);
void transposeYazdir(int **,int,int);

int main(void){
    int **matris ,sutun,satir;
    printf("Olusturacaginiz matrisin sutun sayisini giriniz:");
    scanf("%d",&sutun);
        printf("Olusturacaginiz matrisin satir sayisini giriniz:");
    scanf("%d",&satir);
    matris=(int **)malloc(sizeof(int *)* satir);
    int i,j;
    for ( i = 0; i < satir; i++)
    {
        matris[i]=(int **)malloc(sizeof(int*)*sutun);
    }
    printf("-----------------------------\n");
    printf("Matris icin elementleri giriniz:\n");
    printf("-----------------------------\n");

    for ( i = 0; i < satir; i++)
    {
        for ( j = 0; j < sutun; j++)
        {
            printf("Matris[%d][%d]=",i,j);
            scanf("%d",(&matris[i][j]));
        }
        
    }
    printf("-----------------------------\n");
    printf("Girdiginiz Matris:\n");
    printf("-----------------------------\n");
    matrisYazdir(matris,satir,sutun);

    printf("-----------------------------\n");
    printf("Girdiginiz matrisin transposesi:\n");
    printf("-----------------------------\n");
    transposeYazdir(matris,satir,sutun);
    for ( i = 0; i < satir; i++)
    {
        free(matris[i]);
    }
    free(matris);
    return 0;
    }

void matrisYazdir(int **matris,int sutun,int satir){
    int i,j;
    for (i = 0; i < satir; i++)
    {
        for ( j = 0; j < sutun; j++)
        {
            printf("%.5d",matris[i][j]);
        }
    printf("\n");
    }
    
    }

void transposeYazdir(int ** matris,int satir,int sutun){
    int i,j;
    for ( i = 0; i < sutun; i++)
    {
        for ( j = 0; j < satir; j++)
        {
            printf("%.5d",matris[j][i]);
        }
        printf("\n");
    }
    
}


