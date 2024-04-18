#include <stdio.h>

int my_strcmp(char str1[],char str2[]);

int main(void){
    char str1[20]="Enes";
    char str2[20]="Enss";
    int result=my_strcmp(str1,str2);
    if (result==0)
    {
        printf("Same Strings");
    }
    else{
        printf("Not same ");
    }
    return 0;
}

int my_strcmp(char str1[],char str2[]){
    int i=0;
    for ( i ; str1[i] != '\0'; i++)
    {
        if (str1[i]!=str2[i])
        {
            return str1[i]-str2[i];
        }
        
    }
    if (str2[i+1]!= '\0')
    {
        return -1;
    }
    else{
        return 0;
    }
    
    
}