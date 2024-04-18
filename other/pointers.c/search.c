#include <stdio.h>
#include <stdlib.h>

/*Aşağıda verilen prototipi kullanarak verilen bir katarda bir karakter
arayan bir fonksiyon yazınız.
char * ara (char *, char)*/
char *ara(char [], char);

int main(void) {
    char str[100], search;
    printf("Enter sentence:");
    fgets(str, 100, stdin); // safer alternative to gets()
    printf("Enter a char want to search:");
    scanf(" %c", &search); // space before %c to skip whitespace characters

    char *result = ara(str, search);
    if (result == NULL) {
        printf("Not Found");
    } else {
        printf("%c found", *result); // dereference the pointer to print the found character
    }
    return 0;
}

char *ara(char str[], char search) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == search) {
            return &str[i]; // return the pointer to the found character
        }
    }
    return NULL;
}
