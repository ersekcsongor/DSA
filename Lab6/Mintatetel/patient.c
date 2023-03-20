//
// Created by Csongor on 3/20/2023.
//

#include "patient.h"


enum Disease getDiseaseByChar(char disease[20])
{

    for (int i = 0; i < NUMBER_OF_DISEASES; ++i) {
        if(strcmp(disease, getDiseaseByEnum(i))==0) return i;
    }
}

enum Disease getDiseaseBychar(char disease[20]);

void readPatient2(Patient_t Patient, FILE *fout) {
    char disease[20];
        fscanf(fout, "%[^\n]", Patient.name);
        fscanf(fout, "%[^\n]", Patient.cnp);
        fscanf(fout, "%i", &Patient.date.day);
        fscanf(fout, "%i", &Patient.date.month);
        fscanf(fout, "%i", &Patient.date.year);
        fscanf(fout, "%s", disease);
        Patient.disease = getDiseaseByChar(disease);
}
void readPatient(Patient_t *pPatient, FILE *fin) {
    fscanf(fin, "%[^\n]", pPatient->name);
    fscanf(fin, "%s", pPatient->cnp);
    char disease[20];
    fscanf(fin, "%s",disease);
    pPatient->disease=getDiseaseByChar(disease);
    fscanf(fin, "%d%d%d",&pPatient->date.year,&pPatient->date.month,&pPatient->date.day);
}

enum Disease getDiseaseBychar(char disease[20]) {
    return ARTHRITIS;
}

void printPatient(Patient_t patient, FILE *fout) {
    fprintf(fout,"%s\n",patient.name);
    fprintf(fout,"%s\n",patient.cnp);
    fprintf(fout,"%i\n",patient.date.year);
    fprintf(fout,"%i\n",patient.date.month);
    fprintf(fout,"%i\n",patient.date.day);
    fprintf(fout,"%s\n",getDiseaseByEnum(patient.disease));
}

char *getDiseaseByEnum(enum Disease disease) {
    switch(disease)
    {
        case INFLUENZA:
            return "INFLUENZA";
        case DIABETES:
            return "DIABETES";
        case CANCER:
            return "CANCER";
        case HYPERTENSION:
            return "HYPERTENSION";
        case ASTHMA:
            return "ASTHMA";
        case HEPATITIS:
            return "HEPATITIS";
        case DEPRESSION:
            return "DEPRESSION";
        case MIGRAINES:
            return "MIGRAINES";
        case ANEMIA:
            return "ANEMIA";
        case OBESITY:
            return "OBESITY";
        case ARTHRITIS:
            return "ARTHRITIS";
        case ALLERGIES:
            return "ALLERGIES";
    }
}
