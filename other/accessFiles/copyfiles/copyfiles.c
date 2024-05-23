#include <stdio.h>

int main(){
    char sourceFile[100];
    char ch;
    char destinationFile[100];
    printf("Enter the name of the file to be copied: ");
    scanf("%s",sourceFile);
    FILE *sfile = fopen("sourceFile.txt", "r");
    if (sfile==NULL)
    {
        printf("Source files not found\n");
        return 0;
    }
    printf("Enter new files name:");
    scanf("%s",destinationFile);
    FILE *dfile = fopen(destinationFile, "w");
    if (dfile==NULL)
    {
        printf("The file not created\n");
        return 0;
    }
    do
    {
     ch=getc(sfile);
     putc(ch,dfile);   

    } while (ch !=EOF);


        fclose(dfile);
        fclose(sfile);

    return 0;

}