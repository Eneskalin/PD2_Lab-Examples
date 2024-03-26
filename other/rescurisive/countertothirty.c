#include <stdio.h>

/*Disardan girilen sayllann toplami 30'dan fazla oldugunda kac adet
say girildigini hesaplayan programin recurisive fonsiyon kullaranak yaziniz.*/

void counterfunc(int,int);

int main(){
    int counter=0,sum=0;
    counterfunc(sum,counter);
}

void counterfunc(int sum,int counter){
    int num;
    if (sum>=30)
    {
        printf("%d",counter);
    }
    else{
        printf("Enter a number: ");
        scanf("%d",& num);
        sum += num;
        counter++;
        counterfunc(sum,counter);
    }
}
