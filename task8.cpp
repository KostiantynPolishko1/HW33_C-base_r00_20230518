#include<iostream>
#include<ctime>
#include<vector>
#include"header.h"
using namespace std;

bool task8(int &size)
{
	srand(time(NULL));
	vector<int> num;
	num.reserve(size);

	for (int i = 0; i < size; i++)
		num.push_back(1 + rand() % 99);

	print(num, 0);

	for (int i = 0; i < num.size() / 2; i++)
		if (*(num.cbegin() + i) != *(num.cend() - 1 - i))
			return false;

	return true;
}