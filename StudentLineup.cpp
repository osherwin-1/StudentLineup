// StudentLineup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	string LineUp = "C:\\Users\\olive\\Downloads\\LineUp.txt"; //File path for LineUp.txt
	ifstream inputFile(LineUp);
	if (!inputFile)
	{
		cout << "Error opening file." << endl;
		return 1;
	}
	string first;
	string last;
	string name;
	int classCount = 0;
	if (inputFile >> name)
	{ //Reads first name from file
		first = name;
		last = name;
		classCount = 1;
	}
		while (inputFile >> name);
	{
			classCount ++;
		//Increments class size for each name read
			if (name < first)
			{
				first = name;
			}
			if (name > last)
			{
				last = name;
			}//Updates first and last names accordingly
	}
	inputFile.close();
	cout << "Students in class: " << classCount << endl;
	cout << "Student at front of line: " << first << endl;
	cout << "Student at back of line: " << last << endl;
}
