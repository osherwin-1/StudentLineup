// StudentLineup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;
int main() // This program reads the names of students from a file and determines alphabetically who will lead and tail the line.
{// This program also counts the number of students in the class.
	ifstream inputFile("LineUp.txt");
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
		while (inputFile >> name)
	{//Reads remaining names
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
	inputFile.close(); //Closes file and displays results
	cout << "Students in class: " << classCount << endl;
	cout << "Student at front of line: " << first << endl;
	cout << "Student at back of line: " << last << endl;
}
