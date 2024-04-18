#include <stdio.h>
#include <stdlib.h>

/*Kabarcık Sıralaması'nı kullanarak belirli bir diziyi sıralamak için bir C programı yazın
Write a C program to sort a given array using Bubble Sort.
*/

void bubbleSort(int *,int);


int main(void){
    int *ptr,arraysize;
    printf("Enter the array size:");
    scanf("%d",&arraysize);
    ptr=(int *)malloc(sizeof(int)*arraysize);
    for (int i = 0; i < arraysize; i++)
    {
        printf("Enter %d . elements:",i+1);
        scanf("%d",&ptr[i]);
    }
    bubbleSort(ptr,arraysize);
    for (int i = 0; i < arraysize; i++)
    {
        printf("%d",*(ptr+i));
    }
    
    
}

void bubbleSort(int * ptr,int arraySize){
    int temp;

    for (int i = 0; i <arraySize-1 ; i++)
    {
        for (int j = 0; j < arraySize-1-i; j++)
        {
            if (ptr[j]>ptr[j+1])
            {
                temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;

            }
            
        }
        
    }
    
}