#include <stdlib.h>
#include <stdio.h>

/*Hasta takip sistemi
▪ Hasta no, adı, yaşı ve hastalık bilgisini tutacak
bir struct oluştur
▪ Belli sayıda hasta girişi yap.
▪ Dosya içerisinde hasta no’ya göre arama yap.
▪ Hasta kaydı sil
▪ Hasta kaydı düzenle.
▪ Dosyadan hastaları listele*/

typedef struct patientsList
{
    int no;
    char name[50];
    int age;
    char info[50];
}patient;

void addPatient(FILE *);
void Search(FILE *);
void deletePatient(FILE *);
void update(FILE *);
void list(FILE *);

int main(void){
    int choose;
    FILE *fileptr;
    fileptr =fopen("patientList.txt","w+");

    while (1)
    {
        printf("Choose \n 1-Add a Patient \n 2- Search \n 3- Delete a Patient \n 4- Update a Patient \n 5-List Patients \n For exit ctrl+c\n");
        scanf("%d",&choose);
        switch (choose)
        {
        case 1:
            addPatient(fileptr);
            break;
        case 2:
            Search(fileptr);
            break;
        case 3:
            deletePatient(fileptr);
            break;
        case 4:
            update(fileptr);
            break;
        case 5:
            list(fileptr);
            
        default:
            printf("Invalid value");
            break;
        }
    }
    fclose(fileptr);
    return 0;

}

void addPatient(FILE *fileptr)
{
    int no;
    patient newpatient = {0, "", 0, ""};
    printf("Enter patient's no: ");
    scanf("%d", &no);
    fseek(fileptr, (no - 1) * sizeof(patient), SEEK_SET);
    fread(&newpatient, sizeof(patient), 1, fileptr);
    if (newpatient.no != 0)
    {
        printf("The patient already exists\n");
    }
    else
    {
        printf("Enter Name, age, and info\n");
        scanf("%s %d %s", newpatient.name, &newpatient.age, newpatient.info);
        newpatient.no = no;
        fseek(fileptr, (no - 1) * sizeof(patient), SEEK_SET);
        fwrite(&newpatient, sizeof(patient), 1, fileptr);
    }
}

void Search(FILE *fileptr){
    int searchno;
    patient patientinfo={0,"",0,""};
    printf("Enter patien no: ");
    scanf("%d",&searchno);
    fseek(fileptr,(searchno-1)*sizeof(patient),SEEK_SET);
    fread(&patientinfo,sizeof(patient),1,fileptr);
    if (patientinfo.no == 0)
    {
        printf("Not found\n");
    }
    else{
        printf("Result\nNo: %d \nName : %s \nAge: %d \nInfo:%s\n",patientinfo.no,patientinfo.name,patientinfo.age,patientinfo.info);
    }
    
    

}


void deletePatient(FILE *fileptr)
{
    patient patientInfo, empty = {0, "", 0, ""};
    int deleteno;
    printf("Enter the patient number to delete: ");
    scanf("%d", &deleteno);
    fseek(fileptr, (deleteno - 1) * sizeof(patient), SEEK_SET);
    fread(&patientInfo, sizeof(patient), 1, fileptr);
    if (patientInfo.no == 0)
    {
        printf("The patient was not found\n");
    }
    else
    {
        fseek(fileptr, (deleteno - 1) * sizeof(patient), SEEK_SET);
        fwrite(&empty, sizeof(patient), 1, fileptr);
        printf("Patient deleted successfully\n");
    }
}


void update(FILE *fileptr){
    patient patientinfo={0,"",0,""};
    int patientno;
    printf("Enter the patient number to update: ");
    scanf("%d",&patientno);
    fseek(fileptr,(patientno-1)*(sizeof(patient)),SEEK_SET);
    fread(&patientinfo,sizeof(patient),1,fileptr);
    if (patientinfo.no == 0)
    {
        printf("The patient not found\n");
    }
    else{
    printf("Update the patient number: ");
    scanf("%d",&patientinfo.no);
    printf("Update the patient name: ");
    scanf("%s",patientinfo.name);
    printf("Update the patienr age: ");
    scanf("%d",&patientinfo.age);
    printf("Update the patient info: ");
    scanf("%s",patientinfo.info);

    fseek(fileptr, (patientno - 1) * sizeof(patient), SEEK_SET);
    fwrite(&patientinfo,sizeof(patient),1,fileptr);
    
    }
}


void list(FILE *fileptr){
    patient patientinfo={0,"",0,""};
    fseek(fileptr,sizeof(patient),SEEK_SET);
    while (!feof(fileptr))
    {
        fread(&patientinfo,sizeof(patient),1,fileptr);
        if (patientinfo.no != 0)
        {
            printf("No: %d \n Name: %s \n Age: %d \n Info: %s \n",patientinfo.no,patientinfo.name,patientinfo.age,patientinfo.info);

        }
        
    }
    
}

