#include<iostream>
#include<ctime>
#include<vector>
#include"header.h"
using namespace std;

vector<int> task7(vector<int> &arr)
{
	cout << "\n Before :\t";
	for (auto i : arr)
		cout << i << " ";

	for (int i = 0; i < arr.size(); i++)
	{
		int x = sqrt(arr[i]);
		if (x * x != arr[i])
		{
			auto iter = arr.begin();
			arr.erase(iter + i);
			i--;
		}

	}

	return arr;
}