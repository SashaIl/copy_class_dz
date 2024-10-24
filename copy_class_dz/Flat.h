#pragma once
#include "Person.h"
class Flat
{

	int floor;
	int flat_num;
	Person p;
public:
	Flat(const Flat& obj) : floor{ obj.floor }, flat_num{ obj.flat_num }, p{ obj.p } {}

	Flat(int floor_f, int flat_num_f, Person p_f) : floor{ floor_f }, flat_num{ flat_num_f }, p { p_f } {}
	Flat(int floor_f) :Flat{ floor_f,0,0 } {}
	Flat() :Flat{ 0,0,0 } {}

	Person& get_Person() {
		return p;
	}
	int get_floor() {
		return floor;
	}
	int get_flatNum() {
		return flat_num;
	}
};

