#include "LMS.h"
COORD coord={0,0};
void gotoxy(int x,int y)
{
    int X=x;
    int Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}