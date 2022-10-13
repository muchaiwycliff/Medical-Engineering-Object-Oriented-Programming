// Program to convert fahrenheit to degrees using a function
#include <iostream>
using namespace std;
float calculate(int f); //function prototype
int main()
{
	int fahrenheit;
	cout<<"enter fahrenheit:"<<endl;
	cin>>fahrenheit;
	float C=calculate(fahrenheit); //calling function
	cout<<"The Conversion is:"<<C<<" Degrees Celcius"<<endl;
	return 0;
}
// Fuction definition
float calculate(int f)
{
	float C; 
	C=0.555555555*(f-32);
	return C;
}