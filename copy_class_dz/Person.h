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

	Person& operator=(const Person& obj){
		if (this == &obj) { return *this; }

		delete[] fullname;
		fullname = new char[strlen(obj.fullname) + 1];
		strcpy_s(fullname, strlen(obj.fullname) + 1, obj.fullname);
		age = obj.age;
		number = obj.number;
		
		return *this;
	}


	Person(Person&& another) {
		fullname = another.fullname;
		age = another.age;
		number = another.number;

		another.fullname = nullptr;
		another.age = 0;
		another.number = 0;
	}

	char* get_Fullname() {
		return fullname;
	}

	int& get_age() {
		return age;
	}

	long& get_number() {
		return number;
	}
};

