#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include "header.h"

using namespace std;

void task2(int& size)
{
	srand(time(NULL));
	vector<int> num;
	num.reserve(size);

	for (int i = 0; i < size; i++)
		num.push_back(1 + rand() % 99);

	print(num, 1);
	sort(num.rbegin(), num.rend());

	cout << "\n Descending array";
	print(num, 2);

	sort(num.begin(), num.end());

	cout << "\n Ascending array";
	print(num, 2);
}