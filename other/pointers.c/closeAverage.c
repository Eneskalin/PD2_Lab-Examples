#include <stdio.h>
#include <stdlib.h>

/*İlk önce kullanıcıya kaç adet sayı gireceğini soran daha sonra kullanıcnın girdiği double sayılar ımalloc ile ayrılmış
alanda depolayan ve bu sayıların ortalmasını ala ve ortlaamaa en yakın 3 sayıyı ekrana yazıdran programı yazınız.*/

double average(double *ptr,int arraysize);

int main(){
    int arraysize;
    double *ptr;
    printf("Enter array size:");
    scanf("%d",&arraysize);
    ptr=(double *)malloc(sizeof(double)*arraysize);
    for (int i = 0; i < arraysize; i++)
    {
        printf("Enter %d . term:",i+1);
        scanf("%lf",&ptr[i]);
    }
    double av=average(ptr,arraysize);
    printf("Average of array: %.2lf\n",av);
    
   for (int i = 0; i < arraysize - 1; i++) {
        for (int j = 0; j < arraysize - 1 - i; j++) {
            if (ptr[j] > ptr[j + 1]) {
                double temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }
    for (int  i = 0; i < arraysize; i++)
    {
        printf("%d",*(ptr+i));
    }
    
    ptr=ptr+(arraysize%2);
    printf("%d\n",*ptr);
    printf("%d\n",*(ptr+1));
    printf("%d\n",*(ptr-1));

    
    return 0;
}

double average(double *ptr,int arraysize){
    double sum=0.0;
    for (int i = 0; i < arraysize; i++)
    {
        sum+=*(ptr+i);
    }

    return sum/arraysize;
    
}