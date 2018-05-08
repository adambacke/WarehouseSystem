#include "WorkActivities.h"
#include <iostream>


int main()
{
	WorkActivities test;
	test.addWorkingActivities(1, 1, 1, 1, 1);
	test.addWorkingActivities(2, 2, 2, 2, 2);
	test.addWorkingActivities(3, 3, 3, 3, 3);
	test.addWorkingActivities(4, 4, 3, 3, 3);
	test.addWorkingActivities(5, 5, 3, 3, 3);

	test.removeActivity(2);

	std::cout << test.toStringAll();

	std::cin.get();

	//test
	//test 2

	return 0;
}

