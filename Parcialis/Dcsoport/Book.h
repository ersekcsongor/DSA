//
// Created by Csongor on 5/4/2023.
//

#ifndef DCSOPORT_BOOK_H
#define DCSOPORT_BOOK_H
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int year,month,day;
}Date;

enum theme{FANTASY,ROMANTIC,ADVENTURE,HISTORY,CRIMINAL};

typedef struct {
    char bookname[15];
    char creator[50];
    enum theme booktheme;
    Date date;
}Book;
void readBooks(Book book);

#endif //DCSOPORT_BOOK_H
