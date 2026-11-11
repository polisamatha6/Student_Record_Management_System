#include "student.h"
void delete_record(struct student **ptr)
{
    struct student *temp;
    int choice, roll, found = 0;
    char name[50];
    if(*ptr == NULL)
    {
        printf("No records to delete\n");
        return;
    }
    printf("1. Delete by roll number\n");
    printf("2. Delete by Name\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    if(choice == 1)
    {
        printf("Enter roll number: ");
        scanf("%d", &roll);
    }
    else if(choice == 2)
    {
        printf("Enter student name: ");
        scanf(" %49[^\n]", name);
    }
    else
    {
        printf("Invalid choice\n");
        return;
    }
    temp = *ptr;
    if(choice == 1)
    {
        while(temp != NULL)
        {
            if(temp->rollno == roll)
            {
                found = 1;
                break;
            }
            temp = temp->next;
        }
    }
    else
    {
        printf("\nMatching student records:\n");
        while(temp != NULL)
        {
            if(temp->rollno != -1 &&
               strcmp(temp->name, name) == 0)
            {
                printf("Roll No: %d Name: %s Percentage: %.2f\n",
                       temp->rollno, temp->name, temp->percentage);
                found = 1;
            }
            temp = temp->next;
        }
        if(found == 0)
        {
            printf("Student not found\n");
            return;
        }
        printf("Enter roll number to delete: ");
        scanf("%d", &roll);
        temp = *ptr;
        found = 0;
        while(temp != NULL)
        {
            if(temp->rollno == roll &&
               strcmp(temp->name, name) == 0)
            {
                found = 1;
                break;
            }
            temp = temp->next;
        }
    }
    if(found == 0)
    {
        printf("Student not found\n");
        return;
    }
    if(temp->rollno == -1)
    {
        printf("Student not found\n");
        return;
    }
    temp->rollno = -1;
    strcpy(temp->name, "");
    temp->percentage = 0;
    printf("Student record deleted successfully\n");
}
