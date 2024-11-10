/*
TITLE: Chapter 5 Exercise 18 - Population Bar Chart
FILE NAME: Chapter5Ex18_DAngeloFrancis.cpp
PROGRAMMER: D'Angelo Francis
DATE: November 2024
REQUIREMENTS: 
* Write a program that produces a bar chart showing the population growth of Prairieville,
a small town in the Midwest, at 20-year intervals during the past 100 years. 

* The program should read in the population figures (rounded to the nearest 1,000 people) 
for 1900, 1920, 1940, 1960, 1980, and 2000 from a file. 

* For each year, it should display the date and a bar consisting of one asterisk for each 1,000 people. 

* The data can be found in the People.txt file.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile("People.txt");

	int pop1900, pop1920, pop1940, pop1960, pop1980, pop2000;

	inputFile >> pop1900 >> pop1920 >> pop1940 >> pop1960 >> pop1980 >> pop2000;
	inputFile.close();

	// bar chart
	cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
	cout << "-----------------------------" << endl << endl;
	cout << "(NOTE: Each asterisk represents 1000 people)" << endl << endl;

	// 1900
	cout << "1900: ";
	for (int count = 0; count < (pop1900 / 1000); ++count)
	{
		cout << "*";
	}

	// 1920
	cout << endl << "1920: ";
	for (int count = 0; count < (pop1920 / 1000); ++count)
	{
		cout << "*";
	}

	// 1940
	cout << endl << "1940: ";
	for (int count = 0; count < (pop1940 / 1000); ++count)
	{
		cout << "*";
	}
	// 1960
	cout << endl << "1960: ";
	for (int count = 0; count < (pop1960 / 1000); ++count)
	{
		cout << "*";
	}

	// 1980
	cout << endl << "1980: ";
	for (int count = 0; count < (pop1980 / 1000); ++count)
	{
		cout << "*";
	}

	// 2000
	cout << endl << "2000: ";
	for (int count = 0; count < (pop2000 / 1000); ++count)
	{
		cout << "*";
	}
}