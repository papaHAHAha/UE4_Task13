#include <iostream>
#include "Helper.h"
#include <string>
#include <cmath>

//task18
class Stack
{
private:
	int* arr;
	int size;
	int capacity;
public:
	Stack() : arr(nullptr), size(0), capacity(0) {}

	~Stack()
	{
		delete[] arr;
	}

	void push(int item)
	{
		if (size == capacity)
		{
			int new_capctity = (capacity == 0) ? 1 : capacity * 2;
			resize(new_capctity);
		}
		arr[size++] = item;
	}

	int pop() 
	{
		if (!is_empty())
		{
			return arr[--size];
		}
		else
		{
			std::cout << "stack is empty";
		}
	}

	bool is_empty() const
	{
		return size == 0;
	}

private:
	void resize(int new_capacity)
	{
		int* new_arr = new int[new_capacity];
		for (int i = 0; i < size; i++)
		{
			new_arr[i] = arr[i];
		}
		delete[] arr;
		arr = new_arr;
		capacity = new_capacity;
	}


};

//task17
class Vector
{
public :
	Vector() : x(5), y(5), z(5)
	{}
	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{}
	void Show()
	{
		std::cout << "\n" << x << " " << y << " " << z;
	}
	void ShowVectorModule()
	{
		Module = sqrt(x * x + y * y + z * z);
		std::cout << "\n" << "Vector module = " << Module;
	}
private :
	double x = 0;
	double y = 0;
	double z = 0;
	double Module = 0;
};

class Task17
{
public :
	Task17() : x(666), j(6.66), g('6')
	{}
	void Show()
	{
		std::cout << "\n" << "int x = " << x << " " << "double j = " << j << " " << "char g = " << g;
	}
private : 
	int x = 0;
	double j = 0;
	char g = 0;
};

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
			//std::cout << array[i][j];
		}
		std::cout << std::endl;
	}
	int currentDate = 15;
	int index = currentDate % N;
	int sum = 0;
	
	for (int j = 0; j < N; j++) {
		sum += array[index][j];
	}
	//std::cout << "sum of numbers in line " << index << " = " << sum << std::endl;

	//task17 too
	Vector v(2,8,3);
	//v.Show();
	//v.ShowVectorModule();

	Task17 task;
	//task.Show();

	//task18 too
	Stack stack;

	stack.push(2);
	stack.push(5);
	stack.push(1);

	std::cout << stack.pop() << std::endl;
}
