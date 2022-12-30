#include<stdio.h>
#include<windows.h>
#include<conio.h>
void gotoxy(short x, short y)
{
    COORD pos = {x,y};//sets co-ordinates in(x,y)
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
int main()
{
   /* printf("|%10s","Gaurav\n");
    printf("..........\n");
    printf("|%10s","Gaurav Kumar\n");
    printf("%05d\n",671);
    printf("%09s\n","Gaurav");
    printf("|%-5d|%-5d|\n",1,2);
    printf("............\n");
    
    // Note: A screen has 25 lines and 80 columns.

    gotoxy(26,100);
    printf("hii");



*/
    char text[4000]="\
    ..........................................................................................\n\r\
    .                $$$$$$$$$$  $$$$$$$$  $$    $$  $$$$$$$$  $$$$$$$$  $$        $$        .\n\r\
    .               $$          $$    $$  $$    $$  $$    $$  $$    $$   $$      $$          .\n\r\
    .              $$          $$    $$  $$    $$  $$    $$  $$    $$    $$    $$            .\n\r\
    .             $$  $$$$$$  $$$$$$$$  $$    $$  $$$$$$$$  $$$$$$$$     $$  $$              .\n\r\
    .            $$  $$  $$  $$    $$  $$    $$  $$ $$     $$    $$      $$$$                .\n\r\
    .           $$$$$$  $$  $$    $$  $$$$$$$$  $$   $$   $$    $$       $$                  .\n\r\
    ..........................................................................................\n\r\
    .                     KK    KK   UU    UU  MM        MM  AAAAAAAA  RRRRRRRR              .\n\r\
    .                    KK  KK     UU    UU  MM MM  MM MM  AA    AA  RR    RR               .\n\r\
    .                   KKKK       UU    UU  MM   MM   MM  AA    AA  RR    RR                .\n\r\
    .                  KKKK       UU    UU  MM        MM  AAAAAAAA  RRRRRRRR                 .\n\r\
    .                 KK  KK     UU    UU  MM        MM  AA    AA  RR RR                     .\n\r\
    .                KK    KK   UUUUUUUU  MM        MM  AA    AA  RR   RR                    .\n\r\
    ..........................................................................................\n\r\
    .         SSSSSSSSSS  HH     HH   AAAAAAAAA    RRRRRRRR  MM        MM  AAAAAAAAA         .\n\r\
    .        SS          HH     HH   AA     AA    RR    RR  MM MM  MM MM  AA     AA          .\n\r\
    .       SS          HH     HH   AA     AA    RR    RR  MM   MM   MM  AA     AA           .\n\r\
    .      SSSSSSSSSS  HHHHHHHHH   AAAAAAAAA    RRRRRRRR  MM        MM  AAAAAAAAA            .\n\r\
    .             SS  HH     HH   AA     AA    RRRR      MM        MM  AA     AA             .\n\r\
    .            SS  HH     HH   AA     AA    RR  RR    MM        MM  AA     AA              .\n\r\
    .   SSSSSSSSSS  HH     HH   AA     AA    RR    RR  MM        MM  AA     AA               .\n\r\
    ..........................................................................................\n\r\
        \r";  
        system("cls");
        system("color 0A");
        printf("%s",text);
        Sleep(1000);
        system("cls");
        system("Color 0b");
        printf("%s",text);
        Sleep(1000);
        system("cls");
        system("Color 0c");
        printf("%s",text);
        Sleep(1000);
        system("cls");
        system("Color 0d");
        printf("%s",text);
        Sleep(1000);
        system("cls");
        system("Color 0e");
        printf("%s",text);
        Sleep(1000);
        system("cls");
        system("Color 0f");
        printf("%s",text);
        Sleep(1000);
        system("cls");
        system("Color 1");
        printf("%s",text);
        Sleep(1000 );
        system("cls");
        system("Color 2");
        printf("%s",text);
        Sleep(1000);
        system("cls");
        system("Color 3");
        printf("%s",text);
        Sleep(1000);
        system("cls");
        system("Color 4");
        printf("%s",text);
        Sleep(1000);
        system("cls");
        system("Color 5");
        printf("%s",text);
        Sleep(1000);
        system("cls");
        system("Color 6");
        printf("%s",text);
         Sleep(1000);
        system("cls");
        system("Color 6");
        printf("%s",text);
         Sleep(1000);
        system("cls");
        system("Color 7");
        printf("%s",text);
        Sleep(1000);
        system("cls");
        system("Color 8");
        printf("%s",text);
		Sleep(1000);
        system("cls");
        system("Color 9");
        printf("%s",text);
        
        
    return 0;
}
