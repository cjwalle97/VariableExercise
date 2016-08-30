#include <iostream>
//Find the value of each of the following expressions, or explain why it is not a valid
//expression.Try this without coding it first.
//a) 2 / 3 + 3 / 5 Not Valid: both numbers equate to 0 due to them being integers
//b) 2 % 3 + 3 % 5 Value: 5
//c) 23 % 15 % -2 Not Valid: negative number
//d) 25 * 1 / 2 Value: 12
//e) 25 * 1.0 / 2 Value: 12
//f) 25 * (1 / 2) Not Valid (1/2) equates to 0
//g) 235 / 8 + 7 value: 36
//h) 235 / 8.0 + 7 value: 36
//i) ((20 + 1) / 2 - 2.0) / (23 + 3)*0.2 not valid: 2-2.0 = 0
int main()
{
	int result = 2 / 3 + 3 / 5;
	std::cout << result << std::endl;
	system("pause");
	return 0;
}