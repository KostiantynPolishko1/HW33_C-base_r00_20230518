#include<iostream>
#include<string>
#include<Windows.h>
#include<vector>
#include"header.h"
using namespace std;

void printMenu()
{
	cout << "\n List of functions with \"Vector\" due to Task 1...8";
	cout
		<< "\n\tFunctions:"
		<< "\n\t1 - del not prime numbers"
		<< "\n\t2 - sort \"Descending\" & \"Ascending\""
		<< "\n\t3 - del numbers repeated: var1"
		<< "\n\t4 - del numbers repeated: var2"
		<< "\n\t5 - del string with defined txt"
		<< "\n\t6 - multiply \"Vector1\" x \"Vector2\""
		<< "\n\t7 - del not square numbers"
		<< "\n\t8 - check polidrom"
		<< endl;
}

int main()
{
	int fun = 0;
	printMenu();

	bool tf = true;
	while (tf)
	{
		cout << "\n\t0 - EXIT!!!";
		cout << "\n Enter num. function -> ";
		fun = checkV();

		if (fun > 8)
		{
			cout << " Enter num. due to above list\n";
			continue;
		}

		system("CLS");
		tf = function(fun);
		
		printMenu();
	}
		
	return 0;
}