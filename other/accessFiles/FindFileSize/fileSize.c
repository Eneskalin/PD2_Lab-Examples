#include <stdio.h>

int main(){
    FILE *filePtr;

    filePtr=fopen("nedamet.txt","r");
    if (filePtr==NULL)
    {
        printf("The file not read!!\n");
        return 0;
    }
    fseek(filePtr,0,SEEK_END);
    long int lenght=ftell(filePtr);
    printf("Size of the file: %ld",lenght);
}