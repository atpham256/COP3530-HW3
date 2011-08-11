// Name: Anthony T. Pham
// UF ID: 5038-1111
// Discussion section #: 1079

#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include "arrayList.h"

using namespace std;

int main()
{
	// variables for hw3prob1 part e i
	arrayList<int> x, y, z;

	// variables to keep track of time
	int start, end;

	// fill arrayList of 1000 integers
	for(int i = 0; i < 1000; i++)
	{
		x.insert(x.size(),i);
	}

	// report times for each method
	cout << "Time for reverse member function (1000 integer arrayList): ";
	start = clock();
	x.reverse();
	end = clock();
	cout << (end-start)/CLOCKS_PER_SEC << " seconds" << endl;

	cout << "Time for reverse non-member function (1000 integer arrayList): ";
	start = clock();
	reverse(x);
	end = clock();
	cout << (end-start)/CLOCKS_PER_SEC << " seconds" << endl;

	// fill arrayList of 5000 integers
	for(int i = 0; i < 5000; i++)
	{
		y.insert(y.size(),i);
	}

	// report times for each method
	cout << "Time for reverse member function (5000 integer arrayList): ";
	start = clock();
	y.reverse();
	end = clock();
	cout << (end-start)/CLOCKS_PER_SEC << " seconds" << endl;

	cout << "Time for reverse non-member function (5000 integer arrayList): ";
	start = clock();
	reverse(y);
	end = clock();
	cout << (end-start)/CLOCKS_PER_SEC << " seconds" << endl;

	// fill arrayList of 10,000 integers
	for(int i = 0; i < 10000; i++)
	{
		z.insert(z.size(),i);
	}

	// report times for each method
	cout << "Time for reverse member function (10,000 integer arrayList): ";
	start = clock();
	z.reverse();
	end = clock();
	cout << (end-start)/CLOCKS_PER_SEC << " seconds" << endl;

	cout << "Time for reverse non-member function (10,000 integer arrayList): ";
	start = clock();
	reverse(z);
	end = clock();
	cout << (end-start)/CLOCKS_PER_SEC << " seconds" << endl;

	// variables for hw3prob1 part e ii
	arrayList<string> dict, dict2;
	string word;
	ifstream inFile, inFile2;
	inFile.open("sortedDictionary.txt");
	inFile2.open("sortedDictionary.txt");
	ofstream outFile("reverseSortedDictA.txt");
	ofstream outFile2("reverseSortedDictC.txt");

	// read in sortedDictionary
	while(inFile >> word)
	{
		dict.insert(dict.size(),word);
	}
	// calculate how much time the reverse member function takes
	start = clock();
	dict.reverse();
	end = clock();
	// write to reverseSortedDictA
	for(arrayList<string>::iterator i = dict.begin(); i != dict.end(); i++)
	{
		outFile << *i << endl;
	}
	// output how much time the method took
	cout << "Time for reverse member function (sortedDictionary arrayList): " << (end-start)/CLOCKS_PER_SEC << " seconds" << endl;

	// read in sortedDictionary
	while(inFile2 >> word)
	{
		dict2.insert(dict2.size(),word);
	}
	// calculate how much time the reverse member function takes
	start = clock();
	reverse(dict2);
	end = clock();
	// write to reverseSortedDictA
	for(arrayList<string>::iterator i = dict2.begin(); i != dict2.end(); i++)
	{
		outFile2 << *i << endl;
	}
	// output how much time the method took
	cout << "Time for reverse non-member function (sortedDictionary arrayList): " << (end-start)/CLOCKS_PER_SEC << " seconds" << endl;

	// close file streams
	inFile.close();
	inFile2.close();
	outFile.close();
	outFile2.close();
}
