#include <stdio.h>
#include <stdlib.h>

/*Kullanici tarafindan belirtilen dosya da kac tane kelime oldugunu donduren fonksiyon
yazin ve bu fonksyionu kullanan bir program olustururunuz*/

int wordCounter(FILE *);

int main(void){
    char filename[50];
    printf("Enter file name want to use ");
    scanf("%s",filename);

    FILE *myptr;
    myptr=fopen(filename,"r");
    if (myptr == NULL)
    {
        printf("The file didn't read");
        return 0;
    }
    
    printf("This file include %d word. ",wordCounter(myptr));
    fclose(myptr);
    return 0;
}

int wordCounter(FILE *myptr){
    int ch,counter=0;

      while ((ch=fgetc(myptr)) != EOF)
    {
        if (ch == ' ')
        {
            counter++;
        }
        
    }

    return counter;
    
}