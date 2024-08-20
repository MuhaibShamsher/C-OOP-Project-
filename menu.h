#include<iostream>
#include<conio.h>
using namespace std;

void welcome()
{
    cout<<endl<<endl;
	cout<<"\t\t\t\t*************************************************\n" ;
	cout<<"\t\t\t\t*                                               *\n" ;
	cout<<"\t\t\t\t*   -----------------------------------------   *\n" ;
	cout<<"\t\t\t\t*    L E G E N D R Y  S A N N I N S  M A R T    *\n" ;
	cout<<"\t\t\t\t*   -----------------------------------------   *\n" ;
	cout<<"\t\t\t\t*                                               *\n" ;
	cout<<"\t\t\t\t*             Project By:                       *\n" ;
	cout<<"\t\t\t\t*             MUHAIB SHAMSHER (CR-029)          *\n" ;
	cout<<"\t\t\t\t*             MUNEEZA BADAR   (CR-022)          *\n" ;
	cout<<"\t\t\t\t*                                               *\n" ;
	cout<<"\t\t\t\t*                                               *\n" ;
	cout<<"\t\t\t\t*                                               *\n" ;
	cout<<"\t\t\t\t*                     OOP PROJECT 2023          *\n" ;
	cout<<"\t\t\t\t*                     Course Instructor:        *\n" ;
	cout<<"\t\t\t\t*                     SIR SHARIQ MAHMOOD KHAN   *\n" ;
	cout<<"\t\t\t\t*                                               *\n" ;
	cout<<"\t\t\t\t*                                               *\n" ;
	cout<<"\t\t\t\t*************************************************\n\n\n" ;
}


void clear()
{
	cout << "Press any key to continue!";
	getch();
	system("CLS");
}


void start() {
    system("cls");
    welcome();
    clear();
}