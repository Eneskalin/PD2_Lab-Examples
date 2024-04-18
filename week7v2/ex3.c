#include <stdio.h>

/*Seçim Sıralaması'nı kullanarak belirli bir diziyi sıralamak için bir C programı yazın
Write a C program to sort a given array using Selection Sort*/

void selectionSort(int *,int);


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
    selectionSort(ptr,arraysize);
    for (int i = 0; i < arraysize; i++)
    {
        printf("%d\n",*(ptr+i));
    }
    
    
}

void selectionSort(int * ptr,int arraySize){
    int temp,min;

    for (int i = 0; i <arraySize-1; i++)
    {
         min=i;
        for (int j = i+1; j < arraySize; j++)
        {
            if (ptr[j]<ptr[min])
            {
                temp=ptr[i];
                ptr[i]=ptr[min];
                ptr[min]=temp;

            }
            
        }
        
    }
    
}