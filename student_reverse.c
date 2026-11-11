#include"student.h"
void reverse_list(struct student **ptr)
{
        struct student *prev=NULL;
        struct student *current=*ptr;
        struct student *next;
        if(*ptr==NULL || (*ptr)->next==NULL)
        {
                printf("Not enough records to reverse\n");
                return;
        }
        while(current!=NULL)
        {
                next=current->next;
                current->next=prev;
                prev=current;
                current=next;
        }
        *ptr=prev;
        printf("Records reversed successfully\n");
}
