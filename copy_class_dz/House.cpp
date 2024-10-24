#include "House.h"

void House::display() {
	cout << "house nuumber: " << get_house_num() << endl;
	cout << "floors in house: " << get_floors_in_house() << endl;
	cout << endl;
	cout << "floor: " << f.get_floor() << endl;
	cout << "flat number: " << f.get_flatNum() << endl;
	cout << endl;
	cout << "name: " << f.get_Person().get_Fullname() << endl;
	cout << "age: " << f.get_Person().get_age() << endl;
	cout << "number: " << f.get_Person().get_number() << endl;
}