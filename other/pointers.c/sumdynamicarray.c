#include <stdio.h>
#include <stdlib.h>
/*Dinamik bellek yonetimi kullanarak bir dizi olusturun.klavyeden girilen degerleri toplayan kodu yaziniz */

int main(){
    int *array,n,sum=0;
    
    printf("Enter array size:");
    scanf("%d",&n);
    array=(int *)malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d.term: ",i+1);
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    printf("Sum of the array: %d",sum);
    


    return 0;
}