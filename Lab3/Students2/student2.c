//
// Created by Csongor on 3/8/2023.
//

#include "student2.h"
char* getGenderdesc(enum Gender type){
    switch(type){
        case FEMALE:
            return "FEMALE";
        case MALE:
            return "MALE";
        case OTHER:
            return "OTHER";
    }
}
void printStudent(Student_t student){
    printf("\t %s\n",student.name);
    printf("\t %s\n",student.neptunCode);
    printf("\t %s\n",student.birthplace);
    printf("\t %.2f\n",student.ExamResult);
    printf("\t %i\n",student.BirthDate.year);
    printf("\t %i\n",student.BirthDate.month);
    printf("\t %i\n",student.BirthDate.day);
    printf("\t %s\n", getGenderdesc(student.gender));

}