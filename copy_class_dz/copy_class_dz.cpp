#include <iostream>
#include "House.h"
int main()
{

	char* fullname{ new char[31] {"Pupkin Vitaliy Volodymyrovych"} };

	House h{11,9,2,104,fullname,21,6621722};
	h.display();
}
