//
// Created by Csongor on 2/27/2023.
//

#include "students.h"
void readStudentDetails(Student_t *pStudent){
    scanf("%[^\n]",pStudent->name);
    scanf("%s",pStudent->neptunCode);
    scanf("%s",pStudent->birthPlace);
    scanf("%i",&pStudent->birthDate.day);
    scanf("%i",&pStudent->birthDate.month);
    scanf("%i",&pStudent->birthDate.year);
    scanf("%i",&pStudent->gender);
    scanf("%f",&pStudent->examResult);
}

void printStudent(Student_t student){
    printf("%s\n",student.name);
    printf("%s\n",student.neptunCode);
    printf("%s\n",student.birthPlace);
    printf("%i\n",student.birthDate.day);
    printf("%i\n",student.birthDate.year);
    printf("%s\n",Gender_name[student.gender]);
    printf("%f\n",student.examResult);
}
