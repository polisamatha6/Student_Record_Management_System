#ifndef STUDENT_H
#define STUDENT_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
        int rollno;
        char name[50];
        float percentage;
        struct student *next;
}SLL;
void add_records(struct student **);
void delete_record(struct student **);
void show_records(struct student *);
void modify_record(struct student *);
int save_records(struct student *);
void load_records(struct student **);
void sort_records(struct student **);
void delete_all(struct student **);
void reverse_list(struct student **);
#endif
