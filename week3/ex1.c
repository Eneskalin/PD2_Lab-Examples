#include <stdio.h>
/*Soru 1: Aşağıda verilen programın çıktısı ne olur.  
Question 1: Predict the output of following program. */

void fun(int x){
    if(x>0){
    fun(--x); 
    printf("%d\t",x); 
    fun(--x); 
    }
}
//step 1 fun(4)=>fun(3); printf x ,fun(2)
//step 2 fun(3) =>fun(2);printd x ,fun(1)
//step 3 fun(2) => fun(1) ; printf x ,fun(0)
//step 4 fun(1) => fun(0)

//step 5 fun(2) => 0; printf 0 ,fun(0)
//step 6 fun(3) => 0; printf 1 ,fun(1)
//step 7 fun(4) => 0; printf 2 ,fun(2)


//step 8 fun(2)=>fun(1);printf 0,fun(0)
//step 9 fun(2)=>fun(1);printf 0,fun(0)




int main(){
    int a=4;
    fun(a);
    return 0;
}
