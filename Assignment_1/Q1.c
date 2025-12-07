// Display some information about a student 

#include <stdio.h>
int main() {
    char First_name[50];
    int Roll;
    char Department[50];
    int Semester;

    // For taking user inputs
    printf("Enter first name: ");
    scanf("%s", &First_name);

    printf("Enter roll number: ");
    scanf("%d", &Roll);

    printf("Enter department: ");
    scanf("%s", &Department);

    printf("Enter semester: ");
    scanf("%d", &Semester);

    // Display the collected information as output  
    printf("\n--- Student Information ---\n");
    printf("First Name : %s\n", First_name);
    printf("Roll       : %d\n", Roll);
    printf("Department : %s\n", Department);
    printf("Semester   : %d\n", Semester);

    return 0;
}