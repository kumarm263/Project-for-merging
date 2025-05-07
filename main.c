#include <stdio.h>
#include "student.h"

int main() {
    int choice, roll;
    do {
        printf("\nStudent Management System\n");
        printf("1. Add Student\n2. View Students\n3. Search Student\n4. Delete Student\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3:
                printf("Enter roll no to search: ");
                scanf("%d", &roll);
                searchStudent(roll);
                break;
            case 4:
                printf("Enter roll no to delete: ");
                scanf("%d", &roll);
                deleteStudent(roll);
                break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 5);
    return 0;
}