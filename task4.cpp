#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
#include"header.h"
using namespace std;

vector<int> task4(int& size)
{
	srand(time(NULL));
	vector<int> num;
	num.reserve(size);

	for (int i = 0; i < size; i++)
		num.push_back(1 + rand() % 99);

	print(num, 1);

	auto end = num.end();
	for (auto it = num.begin(); it != end; it++)
		end = remove(it + 1, end, *it);

	num.erase(end, num.end());

	return num;

}