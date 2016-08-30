#include <iostream>
//What will be the output when the input is :
//a) 1 A 45 output i:1, ch:A, f:45
//b) 1A45 output i:1, ch:A, f:45
//c) 1 9 45 output i:1, ch:9, f:45
//d) 1 945 output i:1, ch:9, f:45
//e) B 45.6 output i:0, ch:a, f:0
//f) 1BC5.6 output i:1, ch:a, f:0
int main()
{
	int i = 0;
	float f = 0;
	char ch = 'a';
	std::cin >> i >> ch >> f;
	std::cout << "i:" << i << "\nch:" << ch << "\nf:" << f << std::endl;
	system("pause");
	return 0;
}