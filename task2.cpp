#include<iostream>
#include<ctime>
#include<vector>
#include "header.h"
using namespace std;

void task2(int& size)
{
	srand(time(NULL));
	vector<int> num;
	num.reserve(size);

	for (int i = 0; i < size; i++)
		num.push_back(1 + rand() % 99);

	for (int i = 0; i < size; i++)
	{
		int imin = i;
		for (int j = i + 1; j < size; j++)
		{
			if (num[j] > num[imin])
				imin = j;
		}
		swap(num[i], num[imin]);
	}

	cout << "Descending array is: ";
	for (auto i : num)
		cout << i << " ";

}