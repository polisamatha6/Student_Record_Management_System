#include"student.h"
void delete_all(struct student **ptr)
{
        struct student *temp;
        if(*ptr ==NULL)
        {
                printf("No records to delete\n");
                return;
        }
        while(*ptr!=NULL)
        {
                temp=*ptr;
                *ptr=(*ptr)->next;
                free(temp);
        }
        printf("All student records deleted successfully\n");
}
