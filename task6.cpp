#include<iostream>
#include<ctime>
#include<string>
#include<vector>
#include"header.h"
using namespace std;

vector<int> task6()
{
	srand(time(NULL));
	int size = 0, x = 0, temp = 0;

	cout << "\n Enter size of vector 1 & 2: ";
	size = checkV();

	vector<int> num1, num2, num3;
	num1.reserve(size);
	num2.reserve(size);
	num3.reserve(size);

	cout << "\n Enter value of vector1 " << size << " times\n";
	int j = 0;
	while (j < size)
	{
		cout << "\tN" << j + 1 << ": ";
		x = checkV();
		num1.push_back(x);
		j++;
	}
	cout << "\n Vector1 manually:\t";
	print(num1, 1);

	for (int i = 0; i < size; i++)
		num2.push_back(10 + rand() % 19);

	cout << "\n Vector2 PC fill:\t";
	print(num2, 1);

	for (int i = 0; i < size; i++)
		num3.push_back(num1[i] * num2[i]);

	return num3;
}