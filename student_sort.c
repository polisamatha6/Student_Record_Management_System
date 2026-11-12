#include"student.h"
void sort_records(struct student **ptr)
{
        struct student *i,*j;
        int choice,roll;
        char name[50];
        float percentage;
        if(*ptr ==NULL ||(*ptr)->next==NULL)
        {
                printf("Not enough records to sort\n");
                return;
        }
        printf("1.Sort by Name(A to Z)\n");
        printf("2.Sort by percentage (High to Low)\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        if(choice!=1 && choice!=2)
        {
                printf("Invalid choice\n");
                return;
        }
        for(i=*ptr;i!=NULL;i=i->next)
        {
                for(j=i->next;j!=NULL;j=j->next)
                {
                        if((choice ==1 && strcmp(i->name,j->name) > 0) || (choice ==2 && i->percentage < j->percentage))
                        {
                                roll=i->rollno;
                                i->rollno=j->rollno;
                                j->rollno=roll;
                                strcpy(name,i->name);
                                strcpy(i->name,j->name);
                                strcpy(j->name,name);
                                percentage = i->percentage;
                                i->percentage = j->percentage;
                                j->percentage = percentage;
                        }
                }
        }
        printf("Recorde sorted successfully\n");
}
