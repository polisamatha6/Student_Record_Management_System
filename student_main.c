#include"student.h"
int main()
{
        struct student *head = NULL;
        char choice, exit_choice;
        load_records(&head);
        while(1)
        {
                printf("\n******** STUDENT RECORD MENU ********\n");
                printf("a/A : Add new record\n");
                printf("d/D : Delete a record\n");
                printf("s/S : Show the list\n");
                printf("m/M : Modify a record\n");
                printf("v/V : Save records\n");
                printf("e/E : Exit\n");
                printf("t/T : Sort the list\n");
                printf("l/L : Delete all the records\n");
                printf("r/R : Reverse the list\n");
                printf("\nEnter your choice: ");
                scanf(" %c", &choice);
                switch(choice)
                {
                        case 'A':
                        case 'a':
                                add_records(&head);
                                break;
                        case 'D':
                        case 'd':
                                delete_record(&head);
                                break;
                        case 'S':
                        case 's':
                                show_records(head);
                                break;
                        case 'M':
                        case 'm':
                                modify_record(head);
                                break;
                        case 'V':
                        case 'v':
                                save_records(head);
                                break;
                        case 'T':
                        case 't':
                                sort_records(&head);
                                break;
                        case 'L':
                        case 'l':
                                delete_all(&head);
                                break;
                        case 'R':
                        case 'r':
                                reverse_list(&head);
                                break;
                        case 'E':
                        case 'e':
                                printf("\nS/s : Save and exit\n");
                                printf("E/e : Exit without saving\n");

                                printf("Enter choice: ");
                                scanf(" %c", &exit_choice);
                                if(exit_choice == 'S' ||
                                   exit_choice == 's')
                                {
                                        save_records(head);
                                }
                                else if(exit_choice == 'E' ||
                                        exit_choice == 'e')
                                {
                                        printf("Exiting without saving\n");
                                }
                                else
                                {
                                        printf("Invalid choice\n");
                                        break;
                                }
                                delete_all(&head);
                                printf("Program terminated\n");
                                return 0;
                        default:
                                printf("Invalid choice\n");
                }
        }
}
