#include<iostream>
#include<vector>
#include"header.h"
using namespace std;

//Task1
//Implement a function that takes a vector of integers and returns a new vector, 
//containing only prime numbers from the original vector.

//Task2
//Write a program that asks the user for the size of a vector
//and then fills it with random numbers from 1 to 100.
//Sort the vector in descending order and display the sorted vector on the screen.

//Task3
//Implement a function that takes two vectors of integers and returns a new vector,
//containing elements that are only present in one of the vectors(excluding common elements).

//Task4
//Напишите программу, которая запрашивает у пользователя размер вектора и затем заполняет его значениями. 
//После этого программа должна удалить все повторяющиеся элементы из вектора и вывести на экран обновленный вектор.

int main()
{
	//=========TASK1=========
	//vector <int> num{0, 1, 1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 15, 16, 18, 19, 19, 20};
	//task1(num);

	//=========TASK2=========
	/*int size = 0;
	cout << "Enter size of array: ";
	size = checkV();
	task2(size);*/

	//=========TASK3=========
	/*vector<int> num{1, 2, 33, 4, 52, 6, 73, 80, 89, 10};
	vector<int> num2{ 33, 2, 3, 44, 35, 6, 7, 80, 90, 100, 21, 22, 2, 44 };
	vector<int> num3(task3(num, num2));

	cout << "\nAfter:  ";
	for (auto i : num3)
		cout << i << " ";
	cout << endl;*/

	//=========TASK4=========
	/*
	int size = 0;
	cout << "Enter size of array: ";
	size = checkV();

	vector<int> num(task4(size));

	cout << "\nAfter:  ";
	for (auto i : num)
		cout << i << " ";
	cout << endl;
	*/

	return 0;
}