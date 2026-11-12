# Student Record Management System

## About the Project

The Student Record Management System is a menu-driven application developed using C programming. It helps manage student information such as roll number, name, and percentage.

I developed this project to understand how linked lists, pointers, dynamic memory allocation, and file handling work in C. Instead of storing records in a fixed-size array, this project uses a singly linked list to add, delete, modify, and organize student records.

## Features

The application provides the following operations:

- **Add Student:** Add a new student record with a unique roll number.
- **Delete Student:** Delete a record using the student's roll number or name.
- **Display Students:** View all student records in a tabular format.
- **Modify Student:** Update student details using roll number, name, or percentage.
- **Search and Sort:** Sort records alphabetically by name or by percentage in descending order.
- **Save Records:** Store student information in a file named `student.dat`.
- **Load Records:** Load previously saved records when the application starts.
- **Reverse List:** Reverse the order of student records.
- **Delete All:** Remove all student records from memory.
- **Exit:** Save and exit or exit without saving changes.

## Technologies Used

- Programming Language: C
- Data Structure: Singly Linked List
- Memory Management: `malloc()` and `free()`
- File Handling: File operations in C
- Compiler: GCC

## Project Structure

```text
Student-Record-Management-System/
│
├── stud_main.c
├── stud_add.c
├── stud_del.c
├── stud_show.c
├── stud_mod.c
├── stud_save.c
├── student.h
├── student.dat
└── README.md
```

## How to Compile

Make sure GCC is installed on your system.

Open the terminal in the project folder and execute:

```bash
gcc stud_main.c stud_add.c stud_del.c stud_show.c stud_mod.c stud_save.c -o student
```

## How to Run

**For Windows:**

```bash
student.exe
```

**For Linux:**

```bash
./student
```

## Main Menu

When you run the application, the following menu is displayed:

```text
******** STUDENT RECORD MENU ********

a/A : Add new record
d/D : Delete a record
s/S : Show the list
m/M : Modify a record
v/V : Save records
e/E : Exit
t/T : Sort the list
l/L : Delete all the records
r/R : Reverse the list

Enter your choice:
```

Select the required option to perform an operation.

## Concepts Used

While developing this project, I worked with the following C programming concepts:

- Structures and pointers
- Singly linked lists
- Dynamic memory allocation
- Functions and modular programming
- Searching and sorting
- File handling
- Memory deallocation
- String handling

## Learning Outcome

This project helped me improve my understanding of data structures and memory management in C. I also got practical experience in dividing a program into multiple source files and working with file operations to maintain records.

---

**Project:** Student Record Management System  
**Language:** C Programming  
**Type:** Mini Project - II
