#include <stdio.h>
#include <stdlib.h>

/*Kullanicinin belirledigi bir dosyadaki icerigi ters cevirip bu icerigi hem ekrana hemde 
farkli bir dosyaya kaydeden bir program yaziniz */

void reserve(FILE *);


int main(void) {
    char sourcename[50], copyfileName[50], ch;
    FILE *sourceptr, *copyptr;
    printf("Enter source file name: ");
    scanf("%s", sourcename);
    
    
    sourceptr = fopen(sourcename, "r");
    if (sourceptr == NULL) {
        printf("The file could not be opened for reading.\n");
        return 1;
    }

  
    printf("Enter copy file name: ");
    scanf("%s", copyfileName);
    copyptr = fopen(copyfileName, "w");
    if (copyptr == NULL) {
        printf("The file could not be created.\n");
        return 1;
    }
    reserve(sourceptr);
   
   
    return 0;
}


void reserve(FILE *sourceptr){
    if (feof(sourceptr))
    {
        return ;   
    }
    int read;
    char ch;
    read=fscanf(sourceptr,"%c",&ch);
    reserve(sourceptr);
    putchar(ch);
}
