//
// Created by Csongor on 5/4/2023.
//

#include "Book.h"

void readBooks(Book book)
{
    scanf("%[^\n]",book.bookname);
    scanf("%[^\n]",book.creator);
    int theme;
    scanf("%d",&theme);
    switch (theme) {
        case 0:
        {
            book.booktheme = 0;
            break;
        }
        case 1:
        {
            book.booktheme = 1;
            break;
        }
        case 2:
        {
            book.booktheme = 2;
            break;
        }
        case 3:
        {
            book.booktheme = 3;
            break;
        }case 4:
        {
            book.booktheme = 4;
            break;
        }
        default:{
            printf("Doesn't exist");
            break;
        }
    }

    scanf("%d",&book.date.year);
    scanf("%d",&book.date.month);
    scanf("%d",&book.date.day);
}
