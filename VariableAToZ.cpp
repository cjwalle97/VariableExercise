#include <iostream>

//Name: Median
//Return Type: int
//Description: find the letter that lies in the middle between two letters. does not work in reverse

int main()
{
	int a;
	int b;
	std::cin >> a >> b;
	int Difference = b - a;
	int Half = Difference / 2;
	int Median = a + Half;
	std::cout << Median << std::endl;
	system("pause");
	return 0;
}