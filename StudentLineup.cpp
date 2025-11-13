// StudentLineup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	string LineUp = "C:\\Users\\olive\\Downloads\\LineUp.txt";
	ifstream inputFile(LineUp);

	string first;
	string last;
	string name;
	int classCount = 0;
	if (inputFile >> name)
	{
		first = name;
		last = name;
		classCount = 1;
	}
	while (inputFile >> name);
	{
		cout << name << endl;
		classCount ++;
		if (name < first)
		{
			first = name;
		}
		if (name > last)
		{
			last = name;
		}
	}
	inputFile.close();
	cout << "Students in class: " << classCount << endl;
	cout << "Student at front of line: " << first << endl;
	cout << "Student at back of line: " << last << endl;
}
