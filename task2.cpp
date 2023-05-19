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

	sort(num.rbegin(), num.rend());

	cout << "Descending array is: ";
	for (auto i : num)
		cout << i << " ";

}