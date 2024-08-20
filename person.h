#pragma once
#include <iostream>
using namespace std;

class Person {
protected:
	string name;
	string tell;

public:
	Person(string name, string tell) {
		this->name = name;
		this->tell = tell;
	}

	virtual void Display() = 0;
};

class Security : public Person {
protected:
	string login;
	string password;

public:
	Security(string name, string tell, string login, string password) : Person(name, tell) {
		this->login = login;
		this->password = password;
	}
};

class User : public Security { 
public:
	// Product brought by the
	int Product1_1_User = 0, Product1_2_User = 0, Product1_3_User = 0;
	int Product2_1_User = 0, Product2_2_User = 0, Product2_3_User = 0;
	int Product3_1_User = 0, Product3_2_User = 0, Product3_3_User = 0;

	User(string name, string tell, string login, string password) : Security(name, tell, login, password) {}

	string getName() {
		return name;
	}

	string getTell() {
		return tell;
	}

	string getLogin() {
		return login;
	}

	string getPassword() {
		return password;
	}

	void Display() {
		cout << "\t\tName     : " << name << endl;
		cout << "\t\tTell     : " << tell << endl;
		cout << "\t\tLogin    : " << login << endl;
		cout << "\t\tPassword : " << password << endl;
	}
};