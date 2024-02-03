#include "System.h"

#include <iostream>

int main()
{

	System system;

	system.AddForm(1);

	std::cout << system.FormExist(1) << '\n';

}
