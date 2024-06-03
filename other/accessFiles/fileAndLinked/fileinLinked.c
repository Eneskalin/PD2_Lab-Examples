#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*iki farklı dosya okuyup, okunan dosyalardaki verileri iki farklı bağlı listeye koyan kodu yazmaya çalışalım.*/

typedef struct k
{
    char kelimeler[40];
    struct k *next;
}node;



int main(){
    

    FILE *readptr1 =fopen("deneme.txt","r");
    FILE *readptr2= fopen("deneme2","r");
    if (readptr2 == NULL || readptr1 == NULL )
    {
        printf("Files not readed\n");
        return 0;
    }

    node *liste1=(node *)malloc(sizeof(node));
    node *liste2=(node *)malloc(sizeof(node));
    node *iter1=liste1;
    node *iter2=liste2;
    
    while (!feof(readptr1))
    {
        char temp[40];
        fscanf(readptr1,"%s",temp);
        strcpy(iter1->kelimeler,temp);
        iter1->next=(node *)malloc(sizeof(node));
        iter1 = iter1->next;
    }

    while (!feof(readptr2))
    {
        char temp[40];
        fscanf(readptr2,"%s",temp);
        strcpy(iter2->kelimeler,temp);
        iter2->next=(node *)malloc(sizeof(node));
        iter2 = iter2->next;
    }
    
    
    
}

