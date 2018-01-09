// This is a simple little code that will take info about your dog and then tell you it in one sentence.
//It takes the form Dog = [name, breed, age, color]

#include<iostream>
using namespace std;

int main()
{
	string name;
	string breed;
	string age;
	string color;


	cout << "What is your dog's name?";
	cin >> name;

	cout << "What breed is your dog?";
	cin >> breed;

	cout << "How old is your dog?";
	cin >> age;

	cout << "What colour is your dog?";
	cin >> color;

	cout << "So, you have a  "<< breed  << "\nThat is    " << color  << "\nNamed  " << name <<"\nWho is " << age << "  year(s) old! \nn";

return 0;
}

