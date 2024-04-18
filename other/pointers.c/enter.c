#include <stdio.h>
#include <stdlib.h>

/*ENTER tuşuna basılana kadar sürekli olarak klavyeden
girilen karakterleri alan ve her bir karakter için ekrana ‘*’
basan bir program yazınız

Kullanıcı ENTER tuşuna bastığı zaman girilen karakterleri
girildiği sırada ekrana yazdırınız. ENTER için karakter kodu
13’tür.
*/

int main(){
    char *str,character;
    int i=0;
    str=(char *)malloc(sizeof(char)*1);
    while (1)
    {
        printf("Enter a char: ");
        *(str+i)=getch();
        if (*(str+1)==13)
        {
            break;
        }
        putchar("*");
        i++;
        str=realloc(str,(i+1)*sizeof(char));
        
    }
    putchar('\n');

    for (int k = 0; k < i; k++)
    {
        putchar(*(str+k));
    }
    
    puts(str);
    free(str);
    return 0;
}