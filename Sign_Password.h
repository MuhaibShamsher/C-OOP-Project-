#pragma once
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

string Function_Password_Val()
{
    string Password_Val = "";

    cout << "\t\t\t\t\tPassword : ";
    char ch;
    while ((ch = getch()) != 13)
    {
        if(ch!=8){
            Password_Val += ch;
            cout<<"*";
        }
        else if(ch == 8 ){
            putchar('\b');
            putchar(' ');
            putchar('\b');
            Password_Val = Password_Val.substr(0,Password_Val.length()-1);
        }
    }

    return Password_Val;
}