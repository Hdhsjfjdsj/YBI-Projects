#include <stdio.h>

#define MAX_PRODUCTS 100
#define MAX_NAME_LENGTH 50

// Global variables
int numPatients = 0;
int P_ID[MAX_PRODUCTS];
char P_name[MAX_PRODUCTS][MAX_NAME_LENGTH];
char P_admissiondate[MAX_PRODUCTS][MAX_NAME_LENGTH];
char blood_group[MAX_PRODUCTS][MAX_NAME_LENGTH];
char Address[MAX_PRODUCTS][MAX_NAME_LENGTH];
char Location[MAX_PRODUCTS][MAX_NAME_LENGTH];
char Reason[MAX_PRODUCTS][MAX_NAME_LENGTH];
char Department[MAX_PRODUCTS][MAX_NAME_LENGTH];
char gender [MAX_PRODUCTS][MAX_NAME_LENGTH];

// Function prototypes
void addPatient();
void display_info();
void bed_req();
void patient_history();



int main() {
    int choice;
    
    do {
        printf("\n ====Welcome to PES HOSPITAL==== \n");
        printf("1. Enter Patient details \n");
        printf("2. Doctor's info \n");
        printf("3. Bed Requirements \n");
        printf("4. View Patient History\n");
        printf("5. Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addPatient();

                break;
                
            case 2:

                display_info();
                break;
                

            case 3:
                bed_req();
                break;
            
            case 4:
                patient_history();
            break;
                
            case 5:
                printf("Thank you for coming to PES HOSPITAL! \n");
                break;
                
            default:
                printf("Invalid input\n");
                break;
        }
    } while (choice != 5);

    return 0;
}

// Function to add a product
void addPatient() {
    if (numPatients < MAX_PRODUCTS) {
        printf("\nEnter Patient details:\n");
        printf("Patient Name: \n");
        scanf("%s", P_name[numPatients]);
        printf("Enter Patient admission date: \n");
        scanf("%s",P_admissiondate[numPatients]);
        printf("Blood group: \n");
        scanf("%s", blood_group[numPatients]);
        printf("Gender: \n");
        scanf("%s",gender[numPatients]);
        printf("Patient ID: \n");
        scanf("%d", &P_ID[numPatients]);
        printf("Location: \n");
        scanf("%s",Location[numPatients]);

        printf("Enter reason \n");
        scanf("%s",Reason[numPatients]);
        printf("Enter department: \n");
        scanf("%s",Department[numPatients]);
        

        numPatients++;
        printf("Patient admitted successfully!\n");
    } else {
        printf("Cannot add more patients. Maximum limit reached.\n");
    }
}

void display_info()
{
    printf("DEPARTMENT NAME        NAME OF THE DOCTOR        AVAILABILITY\n");
    printf("general physician      Dr.Ramesh                 9am-5pm\n");
    printf("Gynocology             Dr.Ramya                  10am-4pm\n");
    printf("Orthopedic surgeon     Dr.Raghavendra            5pm-8pm\n");
    printf("Ent Specialist         Dr.Gagan                  11am-5pm\n");
    printf("Skin Specialist        Dr.Chirayu Mahesh         9am - 7pm\n");
    printf("Radiology              Dr.Dhanush                11am-6pm\n");
}


void bed_req()
{
    int choice;
    printf("Enter the bed requirement with the number(1,2,3)\n");
    printf("1) Single AC Ward\n");
    printf("2) Single non AC Ward\n");
    printf("3) General Ward\n");
    scanf("%d",&choice);

}

void patient_history()
{
    printf("============Patient history===============\n\n\n");
    printf("Patient name         Patient id           location             reason for admission admission date\n");

    for(int i=0;i<numPatients;i++)
    {
       printf("%-21s",P_name[i]);
       printf("%-21d",P_ID[i]);
       printf("%-21s",Location[i]);
       printf("%-21s",Reason[i]);
       printf("%-21s",P_admissiondate[i]);
       printf("\n");
    }
   
}

// Function to display all products