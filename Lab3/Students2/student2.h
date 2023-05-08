//
// Created by Csongor on 3/8/2023.
//

#ifndef STUDENTS2_STUDENT2_H
#define STUDENTS2_STUDENT2_H
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int year,month,day;
}diak;

enum Gender{FEMALE,MALE,OTHER};

typedef struct {
    char name[50];
    char neptunCode[50];
    char birthplace[50];
    double ExamResult;
    enum Gender gender;
    diak BirthDate;

}Student_t;

char* getGenderdesc(enum Gender type);

void readStudentDetails(Student_t *pStudent);

void printStudent(Student_t student);

#endif //STUDENTS2_STUDENT2_H
