#include <stdio.h>
#include "student.h"

void addStudent() {
    if (count >= MAX) {
        printf("Cannot add more students. Limit reached.\n");
        return;
    }

    printf("Enter Roll No: ");
    scanf("%d", &students[count].roll);
    printf("Enter Name: ");
    scanf(" %[^\n]", students[count].name);
    printf("Enter Marks: ");
    scanf("%f", &students[count].marks);
    
    count++;
    printf("Student added successfully.\n");
}