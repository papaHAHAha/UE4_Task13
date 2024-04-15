#include <iostream>
#include "Helper.h"
#include <string>

//task 15
const int N = 10;
void printNumbers(int N, bool even)
{
	if (even)
	{
		std::cout << "not even numbers from 0 to " << N << ":\n";
		for (int i = 1; i <= N; i += 2)
		{
			std::cout << i << " ";
		}
	}
	else
	{
		std::cout << "even numbers from 0 to " << N << ":\n";
		for (int i = 0; i <= N; i += 2)
		{
			std::cout << i << " ";
		}
	}
}

int main()
{
	//task_13
	int result = sqrtSum(1, 2);
	//std::cout << "result = " << result << std::endl;

	/*
	task14
	std::string name{ "Ivan" };
	std::cout << name << "\n";
	std::cout << name.length() << "\n";
	std::cout << name[0] << "\n";
	std::cout << name[3] << "\n";
	*/

	//task15 too
	//std::cout << "even numbers from 0 to " << N << "\n";
	for (int i = 0; i <= N; i += 2)
	{
		//std::cout << i << "\n";
	}
	
	/*if(false)
	{
		std::cout << "not even numbers from 0 to " << n << "\n";
		for (int i = 1; i <= n; i += 2)
		{
			std::cout << i << "\n";
		}
	}
	else
	{
		std::cout << "even numbers from 0 to " << n << "\n";
		for (int i = 0; i <= n; i += 2)
		{
			std::cout << i << "\n";
		}
	}*/

	/*printNumbers(N, true);
	std::cout << "\n";
	printNumbers(N, false);*/

	//task 16
	const int N = 5;
	int array[N][N];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) 
		{
			array[i][j] = i + j;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			std::cout.width(3);
			std::cout << array[i][j];
		}
		std::cout << std::endl;
	}
	int currentDate = 15;
	int index = currentDate % N;
	int sum = 0;
	
	for (int j = 0; j < N; j++) {
		sum += array[index][j];
	}
	std::cout << "sum of numbers in line " << index << " = " << sum << std::endl;
}
