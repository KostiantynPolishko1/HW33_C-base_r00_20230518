#include<iostream>
#include<vector>
#include "header.h"
using namespace std;

void task1(vector<int>& arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		auto iter = arr.cbegin();
		if (abs(arr[i] == 1 || arr[i] == 0))
		{
			arr.erase(iter + i);
			i--;
			continue;
		}
			
		for(int j = 2; j <= arr[i]/2; j++)
			if (arr[i] % j == 0)
			{
				arr.erase(iter + i);
				i--;
				break;
			}
	}

	for (auto i : arr)
		cout << i << " ";
}