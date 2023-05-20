#include<iostream>
#include<vector>
#include<string>
#include "header.h"

bool function(int& fun)
{
	cout << "\n\tFunction N" << fun << endl;

	switch (fun)
	{
	case 1://==TASK1==
	{
		vector <int> num{ 0, 1, 1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 15, 16, 18, 19, 20, 21 };
		print(num, 1);
		task1(num);
		print(num, 2);
	}
	break;
	case 2://==TASK2==
	{
		int size = 0;
		cout << " Enter size of array: ";
		size = checkV();
		task2(size);
	}
	break;
	case 3://==TASK3==
	{
		vector<int> num{ 1, 2, 33, 4, 52, 6, 73, 80, 89, 10 };
		vector<int> num2{ 33, 2, 3, 44, 35, 6, 7, 80, 90, 100, 21, 22, 2, 44 };
		vector<int> num3(task3(num, num2));

		cout << "\n Vector3";
		print(num3, 2);
	}
	break;
	case 4://==TASK4==
	{
		int size = 0;
		cout << " Enter size of array: ";
		size = checkV();

		vector<int> num(task4(size));
		print(num, 2);
	}
	break;
	case 5://==TASK5==
	{
		vector<string> lang{ "Hello", "word", "name", "work", "student", "study", "academy" };

		print(lang, 1);
		task5(lang);
		print(lang, 2);
	}
	break;
	case 6://==TASK6==
	{
		vector<int> num(task6());
		cout << "\n Vector1 x Vector2:\t";
		print(num, 2);
	}
	break;
	case 7://==TASK7==
	{
		vector<int> num{ 1, 2, 3, 4, 9, 10, 11, 16, 18, 24,25 };

		print(num, 1);
		task7(num);
		print(num, 2);
	}
	break;
	case 8://==TASK8==
	{
		cout << "\n Enter size of vectors: ";
		int size = checkV();

		if (task8(size))
			cout << "\n\tIS PALIDROM\n";
		else
			cout << "\n\tIS NOT PALIDROM\n";
	}
	break;
	default:
	{
		cout << "\n\tEXIT! NO FUNCTION SELECTED\n";
		return false;
	}

	return true;
	}
}