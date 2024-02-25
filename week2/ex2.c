# include <stdio.h>
 /*N elemanli tam sayi tipinde bir dizide elemanlarin toplamini bulan programi recurisive 
 fonksiyon kullaranark c dilinde yaziniz*/
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