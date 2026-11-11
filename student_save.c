#include "student.h"

int save_records(struct student *ptr)
{
    FILE *fp;

    fp = fopen("student.dat", "w");

    if(fp == NULL)
    {
        printf("Unable to open file\n");
        return 0;
    }

    while(ptr != NULL)
    {
        if(ptr->rollno != -1)
        {
            fprintf(fp, "%d %s %f\n",
                    ptr->rollno,
                    ptr->name,
                    ptr->percentage);
        }

        ptr = ptr->next;
    }

    fclose(fp);

    printf("Records saved successfully\n");
    return 1;
}

void load_records(struct student **ptr)
{
    FILE *fp;
    struct student *new, *temp;
    int roll;
    char name[50];
    float percentage;

    fp = fopen("student.dat", "r");

    if(fp == NULL)
        return;

    while(fscanf(fp, "%d %49s %f",
                 &roll, name, &percentage) == 3)
    {
        new = malloc(sizeof(struct student));

        if(new == NULL)
        {
            printf("Memory allocation failed\n");
            fclose(fp);
            return;
        }

        new->rollno = roll;
        strcpy(new->name, name);
        new->percentage = percentage;
        new->next = NULL;

        if(*ptr == NULL)
        {
            *ptr = new;
        }
        else
        {
            temp = *ptr;

            while(temp->next != NULL)
                temp = temp->next;

            temp->next = new;
        }
    }

    fclose(fp);

    printf("Records loaded successfully\n");
}
