#include <stdio.h>

/*M uzunluğundaki bir sayı dizisinde en az X kere tekrar eden sayıları ve en fazla tekrar eden
sayıyı bulup ekrana yazdıran algoritmanın kodunu yazınız. X, M ve sayı dizisi kullanıcı
tarafından girilecektir.
*/
int main(){
    int n,*ptr,x,counter=0,max=0,maxindex=0;
    printf("Enter array size: ");
    scanf("%d",&n);
    int array[n];
    ptr=&array[0];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d . term ",i+1);
        scanf("%d",&array[i]);
    }
    printf("Enter x value: ");
    scanf("%d",& x);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (ptr[i]==ptr[j])
            {
                counter++;
            }
            if (counter>=x)
            {
                printf("%d value used %d times \n",i,counter);
            }
            if (counter>max)
            {
                maxindex=ptr[i];
                max=counter;
            }
            counter =0;
            
        }
        printf("The most use value is %d.It's used %d times.\n",maxindex,max);
        
    }
    

    
    
}