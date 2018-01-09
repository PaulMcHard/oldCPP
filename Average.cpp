// Okay lets try this again, here's a code which will average the sum of two numbers

#include<iostream>
using namespace std;

int main()
{
	double num1 = 0;
	double num2 = 0;
	double total = 0;
	double avg = 0;

	cout << "Please enter a number :";
	cin >> num1;

	cout << "Please enter another number: ";
	cin >> num2;

	total = num1 + num2;
	cout << "\nTotal of the two numbers is: " << total << "\n";

	avg = (total /2);

	cout << "the average of the two numbers is: " << avg << "\nn";

	return 0;
}
