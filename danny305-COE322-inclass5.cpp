// Danny Diaz - dd32387
// InClass Assignment 5
// 10-15-18

#include <iostream>
#include <cmath>

using namespace std;

float sum_squares (float number){
	
	if (number == 1){
		return 1;
	} 

	return pow(number,2) + sum_squares(number - 1);
}


int main () {
	float inputNumber;
	float sum;

	cout << "Enter the  number to sum to: " << endl;
	cin >> inputNumber;
	
	sum = sum_squares(inputNumber);

	cout << "The sum of square up to the number: "<< inputNumber << endl
	<< "equals: " << sum << endl;
}
