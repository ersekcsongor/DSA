//
// Created by Csongor on 2/27/2023.
//

#ifndef STUDENTS_STUDENTS_H
#define STUDENTS_STUDENTS_H

enum Gender{MALE,FEMALE,OTHER};

typedef struct {
    int year,month,day;
}Date_t;

typedef struct {
    char name[50];
    char neptunCode[8];
    char birthPlace[25];
    Date_t birthDate;
    enum Gender gender;
    float examResult;
}Student_t;

static const char * const Gender_name[] = {
        [MALE] = "MALE",
        [FEMALE] = "FEMALE",
        [OTHER] = "OTHER",
};


#include <stdio.h>
#include <stdlib.h>
/**
* Reads all details of a student, student must be passed by reference
* @param pStudent - pointer to a student
*/
void readStudentDetails(Student_t *pStudent);
/**
* Prints all details of a student
* @param student
*/

void printStudent(Student_t student);
/**
* Allocates memory for an array of Student_t types, array must be passed by reference
* @param dpStudents - double pointer to a Student_t type
* @param numberOfStudents
*/
void allocateMemoryForStudents(Student_t **dpStudents, int numberOfStudents);
/**
* Reads all students' data from an input
* This function should call first the @allocateMemoryForStudents function
* @param dpStudents - double pointer to a Student_t type
* @param numberOfStudents
* @param input CON or input file name
*/
void readAllStudentsDetails(Student_t **dpStudents, int *numberOfStudents, const char *input);
/**
* Prints all students to a given destination
* @param pStudents - pointer to a student, start of the array
* @param numberOfStudents
* @param destination CON or output file name
*/
void printAllStudents(Student_t *pStudents, int numberOfStudents, const char *destination);
/**
* Returns the number of students with a specific gender
* @param pStudents - pointer to a student, start of the array
* @param numberOfStudents
* @param gender - one of the Gender enum values
* @return - number of students with a specific gender
*/
int getNumberOfStudentsByGender(Student_t *pStudents, int numberOfStudents, enum Gender gender);
/**
* Prints all students from a specific city
* @param pStudents - pointer to a student, start of the array
* @param numberOfStudents
* @param city
*/
void printStudentsFromSpecificCity(Student_t *pStudents, int numberOfStudents, const char *city);
/**
* Finds a student with a specific Neptun code
* @param pStudents - pointer to a student, start of the array
* @param numberOfStudents
* @return A Student_t with the provided Neptun code, otherwise NULL
*/
Student_t findStudentByNeptunCode(Student_t *pStudents, int numberOfStudents);
/**
* Sorts the array of students by name in ABC order
* @param pStudents - pointer to a student, start of the array
* @param numberOfStudents
*/
void sortStudentsByName(Student_t *pStudents, int numberOfStudents);
/**
* Sorts the array of students by their date of birth (ASC) and exam results (ASC)
* @param pStudents - pointer to a student, start of the array
* @param numberOfStudents
*/
void sortStudentsByAgeAndExam(Student_t *pStudents, int numberOfStudents);
#endif //STUDENTS_STUDENTS_H