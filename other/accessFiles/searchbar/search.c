#include <stdio.h>
#include <stdlib.h>

/*Kullanicinin girdigi bir karakteri kullanicinin belirledigii bir dosya icerisinde arayan
ve bu karakterin dosya icersinide kac defa gectigini donduren bir fonksiyon yaziniz.
Bu foksiyonu kullanan bir program yaziniz*/

int charcounter(FILE *, char);

int main(void) {
    FILE *myptr;
    char filename[50];
    char charTofind;

    printf("Enter file name to search: ");
    scanf("%s", filename);
    printf("Enter a character to search: ");
    scanf(" %c", &charTofind); 

    myptr = fopen(filename, "r");
    if (myptr == NULL) {
        printf("Unable to open file");
        return 0;
    }

    int count = charcounter(myptr, charTofind);
    printf("'%c' found %d times in the file.\n", charTofind, count);

    fclose(myptr);
    return 0;
}

int charcounter(FILE *myptr, char charTofind) {
    int count = 0;
    char ch;

    while ((ch = fgetc(myptr)) != EOF) {
        if (ch == charTofind) {
            count++;
        }
    }

    return count;
}
