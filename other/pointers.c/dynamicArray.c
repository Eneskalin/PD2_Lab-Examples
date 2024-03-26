#include <stdio.h>
#include <stdlib.h>

/* Dinamik bellek yonetimini kullanarak uzunlugu klavyeden girilen dizinin ortalamasini bulun */

int main(){
    int arraySize,sum=0;
    int *array;
    printf("Enter size of array:");
    scanf("%d",&arraySize);
    array =(int *) malloc(sizeof(int)*arraySize);
    if (array== NULL)
    {
        printf("Not create memory size\n");
        return 0;
    }
    
    for (int i = 0; i < arraySize; i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d",array+i);
        sum+=array[i];
    }
    float result= sum/arraySize;
    printf("Average: %.2f",result);
    free(array);
    
    return 0;
}