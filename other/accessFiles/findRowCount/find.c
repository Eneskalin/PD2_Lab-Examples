#include <stdio.h>
#include <stdlib.h>

/*Kullanicinin belirledigi bir dosya daki kelime ve satir sayisini bulan bir program yaziniz*/

void find(FILE *);
    int rowcounter=0;
    int *ptr=&rowcounter;

int main(void){
    char filename[50];
    FILE *myptr;
    printf("Enter want to read file: ");
    scanf("%s",filename);
    myptr=fopen(filename,"r");
    if (myptr==NULL)
    {
        printf("The folder didn't read");
        return 0;
    }

    find(myptr);

    printf("This file include %d rows.",*ptr);
    fclose(myptr);
    
}

void find(FILE *myptr){
    char sentences[100];
    while (!feof(myptr))
    {
        fgets(sentences,100,myptr);
        rowcounter++;
    }
    
}