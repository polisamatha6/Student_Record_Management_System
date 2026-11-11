#include "student.h"
void add_records(SLL **ptr)
{
    SLL *new, *temp, *prev;
    int roll, found;
    new = (SLL *)malloc(sizeof(SLL));
    if(new == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    /* Find smallest unused positive roll number */
    roll = 1;
    while(1)
    {
        found = 0;
        temp = *ptr;
        while(temp != NULL)
        {
            if(temp->rollno == roll)
            {
                found = 1;
                break;
            }
            temp = temp->next;
        }
        if(found == 0)
            break;
        roll++;
    }
    new->rollno = roll;
    printf("Enter name: ");
    scanf("%49s", new->name);
    printf("Enter percentage: ");
    scanf("%f", &new->percentage);
    new->next = NULL;
    /* Insert node in ascending roll number order */
    temp = *ptr;
    prev = NULL;
    while(temp != NULL && temp->rollno < new->rollno)
    {
        prev = temp;
        temp = temp->next;
    }
    if(prev == NULL)
    {
        new->next = *ptr;
        *ptr = new;
    }
    else
    {
        prev->next = new;
        new->next = temp;
    }
    printf("Record added successfully\n");
    printf("Roll number: %d\n", new->rollno);
}
