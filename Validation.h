#include <iostream>
#include <string>  
#include <ctype.h> 
using namespace std;

// Global Identifires for validation
int Num_Upper = 0, Num_Lower = 0, Num_Number = 0, validation = 0;

// Identifires for File Hendling
string Name_Memory, Login_Memory, Password_Memory, TellNum_Memory;


class Validation {
private:
	string Name, Login, Password, TellNum;

public:
	Validation(): Name(" "), Login(" "), Password(" "), TellNum(" ") {}

	void Display() {
		cout << "\t\t\tUser Information :" << endl << endl;
		cout << "\t\tUser Name  : " << Name << endl;
		cout << "\t\tTelephone  : " << TellNum << endl;
		cout << "\t\tLogin      : " << Login << endl;
		cout << "\t\tPassword   : " << Password << endl;
	}

	void SetUser() {
		cout << "\t\t\t\t       Register User " << endl << endl;
		cout << "\t\t\t\t        User Name : " ;    cin >> Name;
		cout << "\t\t\t\t        Telephone : " ;    cin >> TellNum;
		cout << "\t\t\t\t        Login     : " ;    cin >> Login;
		cout << "\t\t\t\t        Password  : " ;    cin >> Password;

		// Info sended to Memory
		Name_Memory = Name;
		Password_Memory = Password;
		Login_Memory = Login;
		TellNum_Memory = TellNum;
	}

	//Validation Check for Password.
	friend void ValidationPassword(Validation User);

	//Validation Check for Name
    friend void ValidationName(Validation  User);

    //Validation Check for TellNum
	friend void ValidationTellNum(Validation User);
};


//Validation Check for Password.
void ValidationPassword(Validation User)
{
    if (User.Password.length() >= 6 && User.Password.length() <= 15)
    {
        for (int i = 0; i < User.Password.length(); i++) {
            if (isupper(User.Password[i])) {
                Num_Upper += 1;
            }
            if (islower(User.Password[i])) {
                Num_Lower += 1;
            }
            if (isdigit(User.Password[i])) {
                Num_Number += 1;
            }
        }

        if (Num_Upper >= 1 && Num_Upper <= 10 && Num_Lower >= 4 && Num_Lower <= 10 && Num_Number >= 2 && Num_Number <= 10) {
            validation++;
            Num_Upper = 0; Num_Lower = 0; Num_Number = 0;
        }

        else {
            Num_Upper = 0; Num_Lower = 0; Num_Number = 0;
        }
    }

    else {
        Num_Upper = 0; Num_Lower = 0; Num_Number = 0;
    }
}

//Validation Check for Name
void ValidationName(Validation  User)
{
    if (User.Name.length() >= 1 && User.Name.length() <= 15)
    {
        for (int i = 0; i < User.Name.length(); i++) {
            if (isupper(User.Name[i])) {
                Num_Upper += 1;
            }
            if (islower(User.Name[i])) {
                Num_Lower += 1;
            }
            if (isdigit(User.Name[i])) {
                Num_Number += 1;
            }
        }

        if (Num_Upper <= 1 && Num_Lower >= 1 && Num_Lower <= 14 && Num_Number == 0) {
            validation++;
            Num_Upper = 0; Num_Lower = 0; Num_Number = 0;
        }
        
        else {
            Num_Upper = 0; Num_Lower = 0; Num_Number = 0;
        }
    }

    else {
        Num_Upper = 0; Num_Lower = 0; Num_Number = 0;
    }
}

//Validation Check for TellNum
void ValidationTellNum(Validation User)
{
    if (User.TellNum.length() >= 9 && User.TellNum.length() <= 12) {
        for (int i = 0; i < User.TellNum.length(); i++) {
            if (isupper(User.TellNum[i])) {
                Num_Upper += 1;
            }
            if (islower(User.TellNum[i])) {
                Num_Lower += 1;
            }
            if (isdigit(User.TellNum[i])) {
                Num_Number += 1;
            }
        }

        if (Num_Upper == 0 && Num_Lower == 0 && Num_Number >= 9 && Num_Number <= 12) {
            validation++;
            Num_Upper = 0; Num_Lower = 0; Num_Number = 0;
        }
	}
	
    else {
        Num_Upper = 0; Num_Lower = 0; Num_Number = 0;
    }
}