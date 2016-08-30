#include <iostream>

//Create a program that swaps two numbers.
//Ask the user for 2 numbers in the console window and store the result in variables called “a”
//and “b” print the result to screen.Write code that swaps the values for these variables, then
//print the variables “a” and “b” again.

int main()
{
	int a;
	int b;
	std::cin >> a >> b;
	std::cout << a << b;
	int tmp = a;
	a = b;
	b = tmp;
	std::cout << a << b << std::endl;
	system("pause");
	return 0;
}