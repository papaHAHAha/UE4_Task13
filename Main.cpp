#include <iostream>
#include "Helper.h"
#include <string>


int main()
{
	//task_13
	int result = sqrtSum(1, 2);
	std::cout << "result = " << result << std::endl;

	//task14
	std::string name{ "Ivan" };
	std::cout << name << "\n";
	std::cout << name.length() << "\n";
	std::cout << name[0] << "\n";
	std::cout << name[3] << "\n";
}
