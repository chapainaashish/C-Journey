//Nested structure in C
//Array can be used if we want to make many objects out of it
//here we are using it to save 10 persons details
struct Person{
    char name[20];
    int phone_no;
    struct address{
        char city[20];
        int zip_code;
        float longitude;
    }person_address;
}person1[10];

#include<stdio.h>
void data_entry(int);
int main()
{
    int total_person, i;
    printf("Total Person: ");
    scanf("%d", &total_person);
    for (i=0; i<total_person;i++)
        data_entry(i);
    printf("\n\t----------------------PERSON(S) DATA-----------------------");
    for (i=0; i<total_person;i++)
    {
        printf("\nName: %s\nContact: %d\nCity: %s\nZipcode: %d\nLongitude: %f\n",
               person1[i].name,
               person1[i].phone_no,
               person1[i].person_address.city,
               person1[i].person_address.zip_code,
               person1[i].person_address.longitude);
    }
}

void data_entry(int i)
{
    printf("\nEnter the name: ");
    scanf("%s",person1[i].name);
    printf("Enter the phone no: ");
    scanf("%d", &person1[i].phone_no);
    printf("Enter the city: ");
    scanf("%s", &person1[i].person_address.city);
    printf("Enter the zipcode: ");
    scanf("%d", &person1[i].person_address.zip_code);
    printf("Enter the longitude: ");
    scanf("%f", &person1[i].person_address.longitude);
}

