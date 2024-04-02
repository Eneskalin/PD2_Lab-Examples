#include <stdio.h>
/*Kendisine gelen tamsayi paramaetrenin asal olup olmadigini bulan asalmi isimli bir fonksiyon yaziniz.Eger asa ise fonksiyon 1 dondurdun
 aksi taktirde 0 dondursun.Bu fonksiyon icin bir isaretci tanimlayip bu isaretsiciyi kullanan bir program yaziniz */

 int asalmi(int);

 int main(){
    int number;
    printf("ENter a number:");
    scanf("%d",&number);
    int result=asalmi(number);
    if (result==1)
    {
        printf("That prime number!");
    }
    printf("Not prime number");

    return 0;

 }

 int asalmi(int number){
    int *ptr, num=number;
    ptr=&num;
    for ( *ptr; *ptr> 0; *(ptr--))
    {
        if (number%num==0)
        {
            return 0;
        }
        
    }
    return 1;
    
 }
 