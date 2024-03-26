#include <stdio.h>
/*Soru 3: Girilen dizideki en büyük elemanı rekürsif olarak bulan programı C dilinde yazınız .  

Question 3: Create an array of an integer type. Write the program in C, which finds the greatest 
element in this series as recursive.*/

int maxnumber(int array[],int x,int max);

void main(){
    int array[8];
    for (int i = 0; i < 7; i++)
    {
        printf("Enter %d . index:",i+1);
        scanf("%d",&array[i]);
    }
    printf("Biggest number in array is:%d",maxnumber(array,7,array[7]));
}

int maxnumber(int array[],int x,int max){
    if (x==0)
    {
        return max;
    }
    else{
        if (array[x]>max)
        {
            return(maxnumber(array,x-1,array[x]));
        }
        else{
            return(maxnumber(array,x-1,max));
        }
        
    }
}
