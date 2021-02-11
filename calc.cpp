#include <iostream>
#include <math.h>
using namespace std;
int main() {
//Calculator

//Variables
double num1, num2;
int choice;

//Input
cout << "Enter number 1: ";
cin >> num1;
cout << "Enter number 2: ";
cin >> num2;

//Select Function
cout << "Enter Your choice:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nEnter Your choice number- ";
cout << "Enter Your choice:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus \nEnter Your choice number- ";
cin>> choice;
//Output
switch(choice)
{

//Addition
case 1:
cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
break;

//Subtraction
case 2:
cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
break;

//Multiplication
case 3:
cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
break;

//Division
case 4:
cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
break;

//Error

case 5:
cout<< num1 << " % " << num2 << " = " <<fmod(num1,num2) << endl;
break;

default:
cout << "Invalid Entry!!";
cout<<"want to enter more(y/n)";
cin>>ch;
}
return 0;
}
