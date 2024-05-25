#include <stdio.h>

/* Soru 1: Öğrencilere ait numara, isim, vize ve final notunun tutulduğu “notlar.txt” isimli dosya
üzerinde işlemler yapabileceğiniz bir C programı yazınız. Buna göre programın menüsü şu şekilde
olacaktır:,
1- Dosya oluştur / veri gir
2- Dosyadan oku / listele
3- Geçme notu 60 üstü olanları listele
4- Dosyada geçme notu 60 ve üstü olanları “gecenler.txt”, düşük olanları ise “kalanlar.txt”  dosyasına
yazdır.
5- Dosya boyutunu ekrana yazdır.
Not: Her bir menü seçeneği bir fonksiyon ile yapılıcaktır.

Question 1: Write a C program that will perform several processes on a sequential Access file named
"grades.txt" in which number, name and grades of students are stored. Main menu of the
program should be as given below:
1 - Create File / Enter Data
2 - Read File / List Content
3 - List Student Having Grade Greater Than 60
4 - Copy student having grade greater than or equal to 60 into 'pass.txt' file and other students into
'fail.txt' file.
5 - Print the size of the "grade.txt" file on the screen
Note: Create a function for each option in the menu. */

void createfolder(int);
void readFile();
void listpassed();
void savepassed();
void filesize();

typedef struct student
{
    int studentno;
    char name[60];
    int midterm;
    int final;

} records;

int main()
{
    int choose, counter = 0;

    while (1)
    {
        printf("--------------------------Menu------------------------------\n");
        printf("Choose [1-6]\n"); // [1-8] düzeltildi.
        printf("1-Create File / Enter data\n2-Read File / List Content\n3-List Of Greater 60\n4-into a file\n5-Print Size\n6-Exit\n"); // \n eklendi.
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            createfolder(counter);
            counter++;
            break;

        case 2:
            readFile();
            break;

        case 3:
            listpassed();
            break;

        case 4:
            savepassed();
            break;

        case 5:
            filesize();
            break;

        case 6:
            return 0;
            break;
        }
    }

    return 0;
}

void createfolder(int counter)
{
    records studentdata;
    FILE *myptr;
    if (counter == 0)
    {
        myptr = fopen("notlar.txt", "w");
        if (myptr == NULL)
        {
            printf("File didn't create!!!\n");
        }
    }

    else
    {
        myptr = fopen("notlar.txt", "a+");
        if (myptr == NULL)
        {
            printf("Not append");
        }

        printf("Enter Student Number - Student Name - Midterm - Final\n"); // \n eklendi.
        scanf("%d %s %d %d", &studentdata.studentno, studentdata.name, &studentdata.midterm, &studentdata.final);
        fprintf(myptr, "%-10d %-13s %-10d %-10d\n", studentdata.studentno, studentdata.name, studentdata.midterm, studentdata.final);
        fprintf(myptr, "\n"); // Her kaydın sonuna bir satır sonu karakteri eklendi.
    }

    fclose(myptr);
}

void readFile()
{
    records studentdata;
    FILE *fileptr;
    fileptr = fopen("notlar.txt", "r");
    printf("%-10s %-13s %-10s %-10s\n", "Number", "Name", "Midterm", "Final");

    while (fscanf(fileptr, "%d %s %d %d", &studentdata.studentno, studentdata.name, &studentdata.midterm, &studentdata.final) != EOF)
    {
        printf("%-10d %-13s %-10d %-10d\n", studentdata.studentno, studentdata.name, studentdata.midterm, studentdata.final);
    }

    fclose(fileptr);
}

void listpassed()
{
    records studentdata;
    FILE *myptr = fopen("notlar.txt", "r");
    if (myptr == NULL)
    {
        printf("File didn't read!!!\n");
        return;
    }
    printf("%-10s %-13s %-10s %-10s\n", "Number", "Name", "Midterm", "Final");
    printf("---------------------------------\n");
    while (fscanf(myptr, "%d %s %d %d", &studentdata.studentno, studentdata.name, &studentdata.midterm, &studentdata.final) != EOF) // ; kaldırıldı.
    {
        if (studentdata.midterm * 0.4 + studentdata.final * 0.6 >= 60)
        {
            printf("%d\t%s\t%d\t%d\n", studentdata.studentno, studentdata.name, studentdata.midterm, studentdata.final); // \n eklendi.
        }
    }
}

void savepassed()
{
    records studentdata;
    FILE *fptr;
    fptr = fopen("notlar.txt", "r");
    FILE *passed, *Npassed;
    passed = fopen("gecenler.txt", "w");
    if (passed == NULL)
    {
        printf("Passed file not created\n");
    }

    Npassed = fopen("kalanlar.txt", "w");
    if (Npassed == NULL)
    {
        printf("Npassed file not created\n");
    }

    while (fscanf(fptr, "%d %s %d %d", &studentdata.studentno, studentdata.name, &studentdata.midterm, &studentdata.final) != EOF)
    {
        if (studentdata.midterm * 0.4 + studentdata.final * 0.6 >= 60)
        {
            fprintf(passed, "%d %s %d %d %d\n", studentdata.studentno, studentdata.name, studentdata.midterm, studentdata.final); // \n eklendi.
            printf("Printed passed successfully\n"); // Yazdırma mesajı düzeltildi.
        }
        else
        {
            fprintf(Npassed, "%d %s %d %d %d\n", studentdata.studentno, studentdata.name, studentdata.midterm, studentdata.final); // \n eklendi.
            printf("Printed not passed successfully\n"); // Yazdırma mesajı düzeltildi.
        }
    }

    fclose(fptr);
    fclose(passed);
    fclose(Npassed);
}

void filesize()
{
    FILE *fileptr = fopen("notlar.txt", "r");
    if (fileptr == NULL)
    {
        printf("File didn't read!!!\n");
        return;
    }
    fseek(fileptr, 0, SEEK_END);
    long fileSize = ftell(fileptr);
    fclose(fileptr);
    printf("File size is %ld bytes.\n", fileSize);
}
