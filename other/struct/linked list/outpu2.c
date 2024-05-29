#include <stdio.h>
#include <stdlib.h>

/*iki basamaklı asal sayılardan oluşan ve başlangıcı head işaretçisi ile gösterilen bir liste üzerinde çalışan aşağ'dakj
kodun ekran çıktısını boş bırakılan alana yazınız. Liste yapısı:

|11|->|13|->|17|->...............->|89|->|97|
*/

    void printlist(node *head){
        int sum=0;
        node *p;  
        p=head; // p => 11
        while (p != NULL)
        {
            sum=p->no % 10 + p->no / 10; // sum = 1 + 1 = 2 // 1+3 // 1+7 
            if (sum % 8 == 0)
            {
                printf("%d\n",p->no); // 17  53  71  97
            }
            p=p->next; // p=> 13
            
        }
        
    }