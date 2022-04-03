// C program to save n number of student name, roll and percentage and display it using structure
#include<stdio.h>
#include<stdlib.h>

// Declaring structre
struct Student{
    char name[100];
    int roll;
    float percentage;
    FILE *fptr;
}student_info;

// Function Prototypes
void write_data(int,Student);
void read_data(int, Student);

int main()
{
    int total_students, choice;
    printf("Enter the operation;\n\t'1' for write data\n\t'2' for read data\nYour chice(DEFAULT: 2): ");
    scanf("%d", &choice);
    printf("Enter the total number of students;\n");
    scanf("%d", &total_students);
    if (choice == 1){
        write_data(total_students, student_info);
    }
    read_data(total_students, student_info);
}

void write_data(int total_students, Student student_info)
{
    int i;
    student_info.fptr = fopen("/home/aashish/Documents/C-Journey/C and DSA/students_data.txt", "a");
    for (i=1;i<=total_students;i++) {
        printf("Enter  student %d name;\n", i);
        scanf("%s", student_info.name);
        printf("Enter student %d roll;\n", i);
        scanf("%d", &student_info.roll);
        printf("Enter student %d percentage;\n", i);
        scanf("%f", &student_info.percentage);
        fprintf(student_info.fptr, "%s\n%d\n%f\n", student_info.name, student_info.roll, student_info.percentage);
    }
    printf("%d data added in file", total_students);
    fclose(student_info.fptr);
}

void read_data(int total_students,struct Student student_info)
{
    student_info.fptr = fopen("/home/aashish/Documents/C-Journey/C and DSA/students_data.txt", "r");
    int i;
    for (i=1;i<=total_students; i++) {
        fscanf(student_info.fptr, "%s\n%d\n%f\n", student_info.name, &student_info.roll, &student_info.percentage);
        printf("\n%s\n%d\n%f\n", student_info.name, student_info.roll, student_info.percentage);
    }
    fclose(student_info.fptr);
    printf("Total %d student(s) file have displayed", total_students);
}


