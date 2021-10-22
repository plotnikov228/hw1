#include<iostream>
using namespace std;

void printTime(int& h, int& m)
{
	cout << "Enter the number of hours: ";
	cin >> h;
	cout << "Enter the number of minutes: ";
	cin >> m;
	cout << "Time: " << h << ":" << m << endl;
}

int main()
{
	int hour, minute;

	printTime(hour, minute);

	return 0;
}