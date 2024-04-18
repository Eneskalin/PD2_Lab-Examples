# include <stdio.h>
 /*Soru 2: N elemanlı tamsayı tipinde bir dizideki elemanların toplamını bulan programı rekürsif 
fonksiyon kullanarak C dilinde yazınız. Dizi boyutunu ve dizi elemanları kullanıcı tarafından 
girilecektir.  

Question 2: Enter the program that finds the sum of the elements in an array of integers of N type 
using the recursive function in C. The array size and array elements will be entered by the user. */

 int sumfunc(int a[],int x);

 void main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    printf("%d",sumfunc(a,8));
 }

 int sumfunc(int a[],int x){
    if (x==0)
    {
        return a[x];
    }
    else{
        return(a[x]+sumfunc(a,x-1));
    }
    
 }