#include"student.h"
void modify_record(struct student *ptr)
{
        struct student *temp;
        int choice,roll,found=0;
        char name[50];
        if(ptr==NULL)
        {
                printf("No student records found\n");
                return;
        }
        printf("1.Modify by roll number\n");
        printf("2.Modify by Name\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        if(choice==1)
        {
                printf("Enter roll number: ");
                scanf("%d",&roll);
                temp =ptr;
                while(temp!=NULL)
                {
                        if(temp->rollno==roll)
                        {
                                found=1;
                                break;
                        }
                        temp=temp->next;
                }
        }
        else if(choice==2)
        {
                printf("Enter  student name: ");
                scanf(" %49[^\n]",name);
                temp=ptr;
                printf("\nMatching student records:\n");
                while(temp!=NULL)
                {
                        if(strcmp(temp->name,name)==0)
                        {
                                printf("Roll No:%d Name: %s Percentage: %.2f\n",temp->rollno,temp->name,temp->percentage);
                                found=1;
                        }
                        temp=temp->next;
                }
                if(found==0)
                {
                        printf("Student not found\n");
                        return;
                }
                printf("Enter roll number to modify: ");
                scanf("%d",&roll);
                temp=ptr;
                found=0;
                while(temp!=NULL)
                {
                        if(temp->rollno==roll && strcmp(temp->name,name)==0)
                        {
                                found=1;
                                break;
                        }
                        temp=temp->next;
                }
        }
        else
        {
                printf("Invalid choice\n");
                return;
        }
        if(found==0)
        {
                printf("Student not found\n");
                return;
        }
        printf("Enter new name: ");
        scanf(" %49[^\n]",temp->name);
        do
        {
                printf("Enter new percentage: ");
                scanf("%f", &temp->percentage);
                if(temp->percentage < 0 || temp->percentage > 100)
                        printf("Invalid percentage. Enter 0 to 100\n");
        }
        while(temp->percentage < 0 || temp->percentage > 100);
        printf("Student record modified successfully\n");
}
