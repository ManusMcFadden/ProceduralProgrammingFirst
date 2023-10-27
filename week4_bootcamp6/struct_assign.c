#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student {
    char name [20];
    char student_id[11]; // Assuming 10 digits.
    unsigned mark;
};

int main () {
    struct student new_student;
    strcpy(new_student.name, "Name Surname");
    char student_id[11];
    int int_student_id;
    scanf(" %s", &student_id);
    int_student_id = atoi(student_id);
    new_student.student_id = int_student_id;
    new_student.mark = 10;
    printf("Student name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %u\n", new_student.mark);
    return 0;
}