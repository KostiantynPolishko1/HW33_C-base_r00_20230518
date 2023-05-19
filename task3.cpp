#include<iostream>
#include<vector>
#include<algorithm>
#include "header.h"
using namespace std;

vector<int> task3(vector<int>& arr, vector<int>& arr2)
{

	auto iter = arr.cend();
	arr.insert(iter, arr2.begin(), arr2.end());

	cout << "\nBefore: ";
	for (auto i : arr)
		cout << i << " ";
	cout << endl;

	auto end = arr.end();
	for (auto it = arr.begin(); it != end; it++)
		end = remove(it+1, end, *it);

	arr.erase(end, arr.end());

	return arr;
}