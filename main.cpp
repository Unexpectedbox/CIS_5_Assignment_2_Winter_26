#include <iostream>
#include <iomanip>

using std::cout;
using std::string;
using std::endl;
using std::cin;

double age;
double height;
string name;
double bmi;
double weight;
double grade;
double score;


int main()
{
    cout << "What is your first name?" << endl;
    cin >> name;

    cout << "What is your age?" << endl;
    cin >> age;

    cout << "What is your height in meters?" << endl;
    cin >> height;

    cout << "Enter your weight kilograms?" << endl;
    cin >> weight;


    cout << "Enter your test score (0-100): " << endl;
    cin >> score;

    if (age <= 0 || height <= 0 || weight <= 0 || score < 0 || score > 100) {
        cout << "Invalid input detected. Please enter valid values." << endl;
        return 1;
    }
        double bmi = weight / (height * height);
        string bmiResult;

        if (bmi < 18.5) {
            bmiResult = "Underweight";
        }
        else if (bmi < 25.0) {
            bmiResult = "Normal weight";
        }
        else if (bmi < 30.0) {
            bmiResult = "Overweight";
        }
        else {
            bmiResult = "Obese";
        }

        string grade;

        if (score >= 90) {
            grade = 'A';
        }
        else if (score >= 80) {
            grade = 'B';
        }
        else if (score >= 70) {
            grade = 'C';
        }
        else if (score >= 60) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }
        
        cout << std::fixed << std::setprecision(2);
        cout << "Your name is " << name << ", you're " << age
            << " years old with a BMI of " << bmi
            << " (" << bmiResult << ") and you got a grade "
            << grade << "!" << endl;

        return 0;
    }