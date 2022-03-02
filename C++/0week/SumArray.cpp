#include <iostream>
using namespace std;

int main()
{
	int numbers[10];
	int sum = 0;
	int max;

	for (int i = 0; i < 10; i++) {
		cin >> numbers[i];
		sum += numbers[i];
	}
	for (int i = 0; i < 10; i++) {
		cout << numbers[i];
		if (i == 9)
			cout << " = ";
		else
			cout << " + ";
	}
	cout << sum << endl;
	max = numbers[0];
	for (int i = 0; i < 10; i++) {
		if (max < numbers[i])
			max = numbers[i];
	}
	cout << "Max : " << max << endl;
	return (0);
}
