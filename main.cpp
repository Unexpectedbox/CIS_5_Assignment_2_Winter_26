#include <iostream>

using std::cout;
using std::string;
using std::endl;
using std::cin;

int age;
int height;
string name;

int main()
{
    cout << "what is your name?" << endl;
    cin >> name;

	cout << "What is your age?" << endl;
	cin >> age;

	cout << "What is your height in centimeters?" << endl;
	cin >> height;
}