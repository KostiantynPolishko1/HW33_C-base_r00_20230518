#include<iostream>
#include<cstdint>
#include<vector>
#include<string>
#include "header.h"
using namespace std;

int checkV()
{
	int a;
	while (true) // the cycle continues until the user enters the correct value
	{
		cin >> a;
		if (cin.fail()) // if the previous extraction was unsuccessful,
		{
			cout << "\n Incorrect input.\n Enter int value: ";
			cin.clear(); // then return the cin to 'normal' mode of operation
			cin.ignore(32767, '\n'); // and remove the previous input values from the input buffer
		}
		else // if all is well, return a
		{
			cin.ignore(32767, '\n'); // and remove the previous input values from the input buffer
			return a;
		}
	}

	return 0;
}

void print(vector<int>& arr, int n)
{
	cout << (n == 0? "\n Vector: " : (n == 1 ? "\n Before: " : "\n After : "));
	for (auto i : arr)
		cout << i << " ";
	cout << endl;
}

void print(vector<string>& arr, int n)
{
	cout << (n == 0? "\n Vector: " : (n == 1 ? "\n Before: " : "\n After : "));
	for (auto i : arr)
		cout << i << " ";
	cout << endl;
}