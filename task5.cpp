#include<iostream>
#include<string>
#include<vector>
#include"header.h"
using namespace std;

vector<string> task5(vector<string>& lang)
{
	string str{};

	cout << "\nBefore: ";
	for (auto& i : lang)
		cout << i << " ";

	cout 
		<< "\n\n For delete words from list."
		<< "\n\tEnter the txt: ";
	cin >> str;
	cin.ignore(32767, '\n');
	
	for (int i = 0; i < lang.size(); i++)
	{
		auto iter = lang.begin();
		if (lang[i].find(str) != -1)
		{
			lang.erase(iter + i);
			i--;
		}
	}

	return lang;
}