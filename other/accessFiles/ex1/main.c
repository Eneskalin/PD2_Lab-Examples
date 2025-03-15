    #include <stdio.h>

    typedef struct{
        int no, ort;
        char ad[30];
    } ogrenci;

    int main()
    {
        FILE* fptr;
        ogrenci bos = {0, 0, ""};
        if((fptr = fopen("ogrKayit.txt", "w")) == NULL)
        {
            printf("Dosya olusturulamadi...\n");
        }
        else
        {
            printf("Ogrenci bilgi girisi:\n");
            printf("No:\n");
            scanf("%d", &bos.no);
            fprintf(fptr, "NO\tORT\tAD\n");
            while(bos.no != 0)
            {
                printf("Ortalama:\n");
                scanf("%d", &bos.ort);
                printf("Ad:\n");
                scanf("%s", bos.ad);
                fprintf(fptr, "%d\t%d\t%s\n", bos.no, bos.ort, bos.ad);
                printf("No:\n");
                scanf("%d", &bos.no);
            }
            fclose(fptr);
        }

        if((fptr = fopen("ogrKayit.txt", "r")) == NULL)
        {
            printf("Dosya okuma islemi basarisiz...\n");
        }
        else
        {
            printf("Dosya okunuyor...\n");
            printf("Dosyadan okunan veriler:\n");
            fscanf(fptr, "%d%d%s", &bos.no, &bos.ort, bos.ad);
            printf("NO\tORT\tAD\n");
            
            while(!feof(fptr))
            {
                printf("%d\t%d\t%s\n", bos.no, bos.ort, bos.ad);
                fscanf(fptr, "%d%d%s", &bos.no, &bos.ort, bos.ad);
            }
            fclose(fptr);
        }
        return 0;
    }
