// SampleApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int count;
	cin >> count;
	cout << "Hello World, the count I entered is " << count << "." << endl;
	string message="";
	cin.ignore();
	getline(cin,message);
	cout << "The message is " << message << endl;
	cin >> message;
	return 0;
}
