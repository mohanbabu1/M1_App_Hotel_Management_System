#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
 
void add();  //FUNCTIONS
void list();
void edit();  //GLOBALLY DECLARED FUNCTIONS N VARIABLE
void delete1();
void search();
 
void setcolor(int ForgC)
{ WORD wColor;
HANDLE hStdOut=GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO csbi;
 
if(GetConsoleScreenBufferInfo(hStdOut,&csbi))
{
wColor=(csbi.wAttributes & 0xB0)+(ForgC & 0x0B);
// SetConsoleTextAttributes(hStdOut,wColor);
SetConsoleTextAttribute(hStdOut,wColor);
 
}
}
 
void login()
{
 
int a=0,i=0;
    char uname[10],c=' ';
    char pword[10];
    char user[10]="user";
    char pass[10]="pass";
    do
{
system("cls");
 
    printf("\n  **************************  LOGIN FORM  **************************  ");
    printf(" \n                       ENTER USERNAME:-");
scanf("%s", &uname);
printf(" \n                       ENTER PASSWORD:-");
while(i<10)
{
    pword[i]=getch();
    c=pword[i];
    if(c==13) break;
    else printf("*");
    i++;
}
pword[i]='\0';
//char code=pword;
i=0;
//scanf("%s",&amp;pword);
if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)
{
printf("  \n\n\n       WELCOME !!!! LOGIN IS SUCCESSFUL");
 
break;
}
else
{
printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
a++;
 
getch();
 
}
}
while(a<=2);
if (a>=2)
{
printf("\nSorry you have entered the wrong username and password for four times!!!");
 
getch();
}
system("cls");
}
