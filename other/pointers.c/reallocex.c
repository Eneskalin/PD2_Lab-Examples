#include <stdio.h>
#include <stdlib.h>
/* Kullanıcıdan iki tamsayı alıp bu sayılar malloc ile ayrılmıl bir bellek alanında depolayınız.Daha sonra da 
önceden ayrılmış iki tam sayılık bellek adresimi realloc ile 3 tam sayı degeri tutacak sekılde güncelleyiniz.
Ardından ilk iki sayının toplamını ayrılan yere yazan programı yazınızç . */

int main(){
    int array[2],a,b,*ptr;
    printf("Enter first value : ");
    scanf("%d",&a);
    printf("Enter second value : ");
    scanf("%d",&b);
    ptr=(int *)malloc(sizeof(int)*2);
    *ptr=a;
    *(ptr+1)=b;
    ptr=realloc(ptr,3*sizeof(int));
    *(ptr+2)=a+b;
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",*(ptr+i));
    }
    
}