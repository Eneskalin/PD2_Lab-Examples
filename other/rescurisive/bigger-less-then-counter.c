#include <stdio.h>

//Bir dizide dışarılan girilen bir sayının dizinin kaç elemanından büyük ve küçük olduğunu bulan rescurisive fonksiyon yazın

void counter(int[],int,int);

int main(){
    int array[10]={0,1,2,3,4,5,6,7,8,9},num;
    printf("Enter number:");
    scanf("%d",&num);
    counter(array,10,num);
    return 0;
}

void counter(int array[],int x,int num){
    static int big=0;
    static int less=0;
    if (x==0)
    {
        printf("%d bigger than %d numbers\n",num,big);
        printf("%d less than %d numbers",num,less);
        return;
    }
    else{
        if (array[x-1]>num)
    {
        less++;   
    }
    else if (array[x-1]<num)
    {
        big++;
    }
    counter(array,x-1,num);
    }
    
    

    
    
}