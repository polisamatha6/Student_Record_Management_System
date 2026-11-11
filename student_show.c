#include "student.h"
void show_records(struct student *ptr)
{
    if(ptr == NULL)
    {
        printf("No records to display\n");
        return;
    }
    printf("\n-------------------\n");
    printf("Rollno  Name            Percentage\n");
    printf("---------------------\n");
    while(ptr != NULL)
    {
        if(ptr->rollno != -1)
        {
            printf("%-8d %-15s %.2f\n",
                   ptr->rollno, ptr->name, ptr->percentage);
        }
        ptr = ptr->next;
    }
    printf("---------------------\n");
}
