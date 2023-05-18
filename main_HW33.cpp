#include<iostream>
#include<vector>
#include"task1.h"
using namespace std;

//Task1
//Implement a function that takes a vector of integers and returns a new vector, 
//containing only prime numbers from the original vector.

int main()
{
	vector <int> num{0, 1, 1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 15, 16, 18, 19, 19, 20};
	task1(num);
	return 0;
}