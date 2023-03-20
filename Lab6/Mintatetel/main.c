#include "patient.h"


int main() {
    Patient_t patient1 = {
            "Pityiri Palko",
            "197822376",
            {1996,10,12},
            DEPRESSION
    };
    FILE *out = fopen("CON","w");
    printPatient(patient1,out);
    Patient_t patient2;
    FILE *in = fopen("CON", "r");
    readPatient(&patient2,in);
    fclose(in);
    char fileName[20];
    out = fopen("CNP.txt","w");
    printPatient(patient2,out);
    fclose(out);
    return 0;
}
