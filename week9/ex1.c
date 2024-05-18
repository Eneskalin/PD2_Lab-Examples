#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Soru 1: Bir sınıftaki öğrencilerin numarası, adı, vize notu ve final notu bilgilerini tek bağlı doğrusal 
listede tutan ve üzerinde çeşitli işlemler yapabilecek bir program yazınız. Programın özellikleri aşağıda 
verilmiştir: 
a) Program bir ana menü ile açılacak. Menüde olacak seçenekler şu şekildedir: 
1- Yeni Kayıt Ekleme 
2- Kayıt Listeleme 
3- Kayıt Güncelleme  
4- Kayıt Silme 
5- Sınıf Ortalaması Hesapla 
6- Ortalamaya Göre En Başarılı Öğrenci Bilgisini Göster 
b) Kayıt listeleme menüsü seçildiğinde açılacak alt menüdeki seçenekler şu şekilde olacak: 
1- Numaraya göre ara 
*Aranacak öğrenci no girilecek ve uyan kayıt varsa tüm bilgisi listelenecek. 
2- İsme göre ara 
*Aranacak isim girilecek ve uyan kayıtların hepsi listelenecek. 
3- Başarı notu 60 ve üzeri olanları listele 
c) Kayıt güncelleme ve silmede öğrenci no sorulacak ve kayıt bulunursa ad, vize ve final bilgisi 
güncellenebilecek.

2) Yukarıda yazdığınız program için bir exchange isimli bir fonksiyon yazınız. Fonksiyon listenin 
başlangıç adresini alacak ve listede yer alan ilk kayıt ile son kaydı yer değiştirecektir. Fonksiyonu ana 
menüye ekleme yaparak çağırınız. 
3) Yukarıda yazdığınız program için bir listLess isimli fonksiyonu yazınız. Fonksiyon listenin başlangıç 
adresini alacak ve listede başarı notu 60’ın altında olan öğrencileri listeden silecektir. Fonksiyonu ana 
menüye ekleme yaparak çağırınız. 
4) Yukarıda yazdığınız program için updateAhmet isimli bir fonksiyonu yazınız. Fonksiyon listenin 
başlangıç adresini alacak ve ismi “Ahmet” olan tüm kayıtları “AHMET” olarak güncelleyecek. 
Fonksiyonu ana menüye ekleme yaparak çağırınız. 
Question 1: Write a C program that is capable of performing several operations with student 
information of a class that is stored as a linear linked list in the memory. Properties that your program 
should have are listed below: 
a) Program will have a main menu with options below: 
1- Add New Record 
2- List Records 
3- Update Record  
4- Delete Record 
5- Calculate Class Average 
6- List Best Student According to Average 
b) When Listing records option has been selected. Show sub menu as given below: 
1- Search according to number 
*Student number will be entered, and information of the student will be 
showed if record is found in the list. 
2- Search according to name 
*Student name will be entered, and all matching records will be listed. 
3- List students having passing grade that is greater than or equal to 60. 
c) Updating and deleting a record will be carried out according to student number. User can e 
able to update Midterm grade, Final grade and name. 
2) Write a function named exchange for the program you have written above. Your function will take 
starting address of the list and exchange first and last record. Add menu item to call your function. 
3) Write a function named listLess for the program you have written above. Your function will take 
starting address of the list and delete all students having passing grade less than 60. 
4) Write a function named updateAhmet for the program you have written above. Your function will 
take starting address of the list and update all records having name “Ahmet” as “AHMET”.  Add menu 
item to call your function.  */

typedef struct studentsdata
{
    int studentno;
    char studentname[50];
    int midtermNote;
    int finalNote;
    struct studentsdata *next;
}studentrecord;

void addnewrecord(int);
void listrecord(void);
void updaterecord(void);
void deleterecord(void);
void calculateaverage(void);
void bestStudent(void);

studentrecord *root,*newstudent,*beforestudent;
studentrecord **ptr=&root;


int main(void){
    int choose,counter=0;
    while (1)
    {
        printf("-----------------MENU--------------------\n");
        printf("Select an option\n");
        printf("1- Add New Record\n");
        printf("2- List Records\n");
        printf("3- Update Record\n");
        printf("4- Delete Record\n");
        printf("5- Calculate Class Average\n");
        printf("5- Calculate Class Average\n");
        printf("6- List Best Student According to Average\n");
        scanf("%d",&choose);
        switch (choose)
        {
        case 1:addnewrecord(counter);  break;
        case 2:listrecord(); break;
        case 3:updaterecord(); break;
        case 4:deleterecord(); break;
        case 5:calculateaverage(); break;
        case 6:bestStudent(); break;
        default: printf("Invalid value!!!!"); break;
        }


    }
    return 0;
}

void addnewrecord(int counter){
    newstudent=(studentrecord *)malloc(sizeof(studentrecord));

        printf("Enter new student Records\n");
        printf("Student Number :");
        scanf("%d",&newstudent->studentno);
        printf("Student Name: ");
        scanf("%s",newstudent->studentname);
        printf("Midterm:");
        scanf("%d",&newstudent->midtermNote);
        printf("Final:");
        scanf("%d",&newstudent->finalNote);

        if (counter==0)
        {
            root=newstudent;
            newstudent->next=NULL;
        }
        else{
            (*ptr)->next=newstudent;
            newstudent->next=NULL;
            ptr=&newstudent->next;
        }
        counter++;
}

void listrecord(void){
    studentrecord *temp=root;
    char searchname[40];
    int searchno,choose;
    printf("Choose an option\n");
    printf("1- Search according to number\n");
    printf("2- Search according to name \n");
    scanf("%d",&choose);

    if (choose==1)
    {
        printf("Enter student number want to find: ");
        scanf("%d",&searchno);

        while (temp != NULL)
        {
            if (searchno==temp->studentno)
            {
                printf(" Student No: %d\n Studentname: %s\n Midterm:%d\n Final:%d\n");
            }
            else{
                printf("Not found\n");
            }
            
        }
        
        
    }
    else if (choose==2)
    {
        printf("Enter student name want to find: ");
        scanf("%s",searchname);

        while (temp != NULL)
        {
            if (strcmp(searchname,temp->studentname) ==0)
            {
                printf("Student  Student Number: %d \n Student Name: %s \n Midterm: %d \n Final: %d\n",temp->studentno,temp->studentname,temp->midtermNote,temp->finalNote);
                return;
                
            }
            printf("Not found\n");
            
        }
        
    }
    else{
        printf("invalid Value!!!!\n");
    } 

}

void updaterecord(void){
    int searchno;
    studentrecord *temp=root;
    printf("Enter studentno want to update:");
    scanf("%d",&searchno);

    while (temp != NULL)
    {
    
        if (temp->studentno==searchno)
        {
            printf("Update Student Number: ");
            scanf("%d",&temp->studentno);
            printf("Update Student Name: ");
            scanf("%s",temp->studentname);
            printf("Update Student Midterm result: ");
            scanf("%d",&temp->midtermNote);
            printf("Update Student Final result: ");
            scanf("%d",&temp->finalNote);
            break;

        }
        printf("Invalid Number!!!\n");
        
    }
    
}

void deleterecord(){
    studentrecord *temp=root, *prev = NULL;
    int deleteno;
    printf("Enter studentno want to delete:");
    scanf("%d",&deleteno);

    while (temp != NULL)
    {
        if (temp->studentno == deleteno)
        {
            if (prev == NULL) {
                root = temp->next; // Düzeltme: Silinen öğrenci kök ise root'u güncelle
            } else {
                prev->next = temp->next; // Düzeltme: Silinen öğrencinin önceki düğümün next işaretçisini güncelle
            }
            free(temp); // Düzeltme: Silinen öğrenci için belleği serbest bırak
            printf("Student record deleted successfully.\n");
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    printf("Student record not found.\n");
}

void calculateaverage(void) {
    // Ortalama hesaplama kodu buraya gelecek
}

void bestStudent(void) {
    // En başarılı öğrenciyi bulma kodu buraya gelecek
}
