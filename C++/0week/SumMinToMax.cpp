#include <iostream>

int main()
{
	int min, max;
	int res = 0;

	std::cout << "What is min: ";
	std::cin >> min;
	std::cout << "What is max: ";
	std::cin >> max;

	for (int i = 0; i <= (max - min); i++) {
		res += min + i;
	}
	std::cout << "Result : " << res << std::endl;
	return (0);
}
