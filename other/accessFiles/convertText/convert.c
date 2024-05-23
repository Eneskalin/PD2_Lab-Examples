#include <stdio.h>
#include <stdlib.h>

/*Kullanicinin belirledigi bir dosyadaki icerigi ters cevirip bu icerigi hem ekrana hemde 
farkli bir dosyaya kaydeden bir program yaziniz */

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

    fseek(sourceptr, 0, SEEK_END);
    long Filelong = ftell(sourceptr);
    fseek(sourceptr, 0, SEEK_SET);


    for (long i = Filelong - 1; i >= 0; i--) {
        fseek(sourceptr, i, SEEK_SET);
        ch = fgetc(sourceptr);
        printf("%c", ch);
        fputc(ch, copyptr);
    }

    printf("\nContents reversed and written to '%s'\n", copyfileName);

  
    fclose(copyptr);
    fclose(sourceptr);
   
    return 0;
}
