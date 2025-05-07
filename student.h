#ifndef STUDENT_H
#define STUDENT_H

#define MAX 100

typedef struct {
    int roll;
    char name[50];
    float marks;
} Student;

// Function declarations
void addStudent();
void viewStudents();
void searchStudent(int roll);
void deleteStudent(int roll);

#endif