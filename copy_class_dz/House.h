#pragma once
#include "Flat.h"
class House
{
	int house_num;
	int floors;
	Flat f;

public:
	House(int house_num_f, int floors_f, int flat_num_f, int floor_f, char* fullname_f, int age_f, long number_f) :
		house_num{ house_num_f }, floors{ floors_f },
		f{ flat_num_f,floor_f,Person{fullname_f,age_f,number_f} } {}

	House(int house_num_f, int floors_f, int flat_num_f, int floor_f, char* fullname_f, int age_f) :
		House{ house_num_f,floors_f, flat_num_f,floor_f, fullname_f,age_f,0 } {}

	House(int house_num_f, int floors_f, int flat_num_f, int floor_f) :
		House{ house_num_f,floors_f, flat_num_f,floor_f, nullptr,0,0 } {}

	House(int house_num_f, int floors_f, int flat_num_f) :
		House{ house_num_f,floors_f, flat_num_f,0, nullptr,0,0 } {}

	House() : House{ 0,0, 0,0, nullptr,0,0 } {}

	House(const House& obj) : house_num{ obj.house_num }, floors{ obj.floors }, f{ obj.f } {}


	const int get_house_num() {
		return house_num;
	}
	const int get_floors_in_house() {
		return floors;
	}
	void display();
};

