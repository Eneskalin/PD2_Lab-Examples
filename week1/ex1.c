#include <stdio.h>
/*KOdun ciktisi nedir*/

int x=5;
int main(){
    int x=10,y=20; 
    {
        printf("x=%d,y=%d\n",x,y); // x=10 y=20
        {
            int y=40; 
            x++;
            y++;
            printf("x=%d y= %d\n",x,y); //x=11 y=41
        }
        printf("x=%d y=%d\n",x,y); //x=11 y=20
    }
    printf("x=%d,y=%d\n",x,y); // x=11 y=20
    return 0;
    

}