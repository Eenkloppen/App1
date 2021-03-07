#include <iostream>

using namespace std;


void task1() {

	cout << "Task #1 " << endl;
	cout << "Enter number one " << endl;

	int numOne;
	int numTwo;

	cin >> numOne;

	cout << "Enter number two " << endl;

	cin >> numTwo;

	if (numOne+numTwo >=10 && numOne + numTwo <=20) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

}

void task2() {

	cout << "Task #2 " << endl;

	const int NUMONE = 5;
	const int NUMTWO = 10;

	if (NUMONE + NUMTWO == 10 || (NUMONE == 10 && NUMTWO == 10)) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}
}

void task3() {

	cout << "Task #3 " << endl;

	for (int i = 1; i <= 50; i++) {
		
		if (i % 2 == 1) {
			cout << i << endl;
		}
	}
}

void task4() {

	int number;
	cout << "Enter the year " << endl;
	cin >> number;

	if (number % 2 == 1) {
		cout << "Number is prime" << endl;
	}
	else {
		cout << "Number is not prime" << endl;
	}

}

void task5() {

	int year;

	cin >> year;

	if (((year % 4) == 0) && (((year % 100) != 0) || ((year % 400) == 0))) {
		cout << "year is a leap year" << endl;
	}
	else {
		cout << "year is not a leap year" << endl;
	}
}

int main() {
	task1();
	task2();
	task3();
	task4();
	task5();
	return 0;
}
