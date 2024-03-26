#include <stdio.h>
#include <stdlib.h>
 
 /*Soru 1: Kullanıcı tarafından istenilen sayıda girilen kelimeleri alfabetik olarak sıralayan programı 
yazınız. 
Kısıtlar: 
1. Sıralama algoritması olarak “bubble sort” ve pointers kullanılmalıdır. 
2. Sıralama sırasında “strcmp” ve “strcpy” fonksiyonlarından faydalanılmalıdır. 
3. Dinamik hafıza yönetimi kullanılmalıdır. 

Question 1: Write the program that alphabetically orders the desired number of words which are 
entered by the user. 
Constraints: 
1. Use “bubble sort” and pointers. 
2. Use “strcmp” and “strcpy” functions while sorting. 
3. Dynamic memory allocation should be used.*/

void bublesort(char **sentences ,int n);
void change(char **ptr1,char **ptr2);

int main(){
    int n;
    char **ptr2,*ptr;
    ptr2=ptr;
    printf("Enter sentece number:");
    scanf("%d",&n);
    ptr2 =(int **)malloc(sizeof(char)*n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter sentences:");
    ptr2[i]= (char*)malloc(90*sizeof(char));
    scanf("%s",ptr[i]);
    
    }

    bublesort(ptr2,n);
    for (int  i = 0; i < n; i++)
    {
        printf("%s",ptr2[i]);
    }
    
    return 0;
}


void bublesort(char **sentences ,int n){

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (strcomp(sentences[j],sentences[j+1]>0))
            {
                change(&sentences[j],&sentences[j+1]);
            }
            
        }
        
    }
}
void change(char **ptr1,char **ptr2){
    char *temp=ptr1;
    ptr1=ptr2;
    ptr2 = temp;

}