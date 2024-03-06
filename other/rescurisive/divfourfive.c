#include <stdio.h>

//10 elemanll bir dizinin elemanlanndan hem 4'e hemde 5'e bölünen sayilari bulan recurisive fonksiyon yazin

void div(int[],int);


int main(){
    int array[10]={22,20,40,45,10,80,41,120,12,400};
    div(array,10);
    return 0;
}

void div(int array[],int x){
    if (x==0)
    {
        return;
    }
    else{
        if (array[x-1]%5==0 && array[x-1]%4==0)
        {
            printf("%d\n",array[x-1]);
        }
        div(array,x-1);

        
    }
    
}