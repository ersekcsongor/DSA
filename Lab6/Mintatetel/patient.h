//
// Created by Csongor on 3/20/2023.
//

#ifndef ARRAY_PATIENT_H
#define ARRAY_PATIENT_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int year,month,day;
}Date_t;

#define NUMBER_OF_DISEASES 11

enum Disease{ INFLUENZA,DIABETES,CANCER,HYPERTENSION,ASTHMA,HEPATITIS,DEPRESSION,MIGRAINES,ANEMIA,OBESITY,ARTHRITIS,ALLERGIES};

typedef struct {
    char name[40];
    char cnp[10];
    Date_t date;
    enum Disease disease;
}Patient_t;
void readPatient(Patient_t Patient, FILE *fout);
void printPatient(Patient_t patient,FILE *fout);
char *getDiseaseByEnum(enum Disease disease);
#endif //ARRAY_PATIENT_H
