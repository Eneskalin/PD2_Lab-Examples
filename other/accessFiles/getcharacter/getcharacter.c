#include <stdio.h>

int main(){
    FILE *files=NULL;
    files=fopen("test.txt","r");
    if (files==NULL)
    {
        printf("Not found file");
        return 1;
    }
    
    int ch;
    while ((ch=fgetc(files)) != EOF)
    {
        putchar(ch);
    }
    printf("\n");
    fclose(files);
    return 0;
    
}