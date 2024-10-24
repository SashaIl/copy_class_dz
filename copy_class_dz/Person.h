#pragma once
#include <iostream>
#include <cstring>
using namespace std;
class Person
{

	char* fullname;
	int age;
	long number;

public:
	Person(char* fullname_f, int age_f, long number_f) :fullname{ fullname_f ? new char[strlen(fullname_f)+1]: nullptr}, age{ age_f }, number{ number_f } {
		if (fullname) {
			strcpy_s(fullname, strlen(fullname_f) + 1, fullname_f);
		}
	}

	Person(char* fullname_f, int age) : Person{ fullname_f ? new char[strlen(fullname_f) + 1] : nullptr,age,0 } {}
	Person(char* fullname_f) : Person{ fullname_f ? new char[strlen(fullname) + 1] : nullptr,0,0 } {}
	Person() :Person{ nullptr,0,0 } {}

	~Person() {
		delete[] fullname;
	}

	Person(const Person& obj) : fullname{ obj.fullname ? new char[strlen(obj.fullname) + 1] : nullptr }, age{ obj.age }, number{ obj.number } {
		if (obj.fullname) {
			strcpy_s(fullname, strlen(obj.fullname) + 1, obj.fullname);
		}
	}

	const char* get_Fullname() const {
		return fullname ? fullname : "No name";
	}

	const int get_age() const{
		return age ? age : 0;
	}

	const long get_number() const{
		return number ? number : 0;
	}
};

