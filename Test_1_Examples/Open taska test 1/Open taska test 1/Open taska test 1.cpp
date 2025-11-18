#include <iostream>
#include <cstring>
using namespace std;

int ex1a() {
	int number, sum=0;
	cout << "Input a number" << endl;
	cin >> number;
	while (number > 0) {
		sum += number % 10;
		number /= 10;
	}
	cout << "Sum of digits is: " << sum << endl;

	return 0;

}

int ex1b() {
	int number, sum = 1;
	cout << "Input a number" << endl;
	cin >> number;
	while (number > 0) {
		sum *= number % 10;
		number /= 10;
	}
	cout << "Product of digits is: " << sum << endl;

	return 0;

}

int ex2ab() {
	double tab[5] = { 2.3,5.4,5.9,2.0,4.3};
	int length = sizeof(tab) / sizeof(double);
	double biggest=tab[0], smallest=tab[0];
	int indexB, indexS;
	for (int i = 0; i < length; i++) {
		if (tab[i] > biggest) {
			biggest = tab[i];
			indexB = i;
		}
		else if (tab[i] < smallest) {
			smallest = tab[i];
			indexS = i;
		}
	}
	cout << "The highest value in array is " << biggest << " and its index is " << indexB << endl;
	cout << "The smallest value in array is " << smallest << " and its index is " << indexS << endl;
	return 0;
}

int reverseArrayEX5(int A[],int size) {
	for (int i = 0; i < (size / 2) ; i++) {
		int temp = A[i];
		A[i] = A[size - 1 - i];
		A[size - 1 - i] = temp;
	}
	for (int j = 0; j < size; j++) {
		cout << A[j] << " ";
	}
	return 0;
}

int main()
{
	
	cout << "Exercise 1a: " << endl;
	ex1a();
	cout << "Exercise 1b: " << endl;
	ex1b();
	cout << "Exercise 2ab " << endl;
	ex2ab();
	// Ex. 3 is very similar to what have i done in previous file
	// Ex 4 is exactly in transposition which was done several times
	int tab[5] = { 1,2,3,4,5 };
	int size = sizeof(tab) / sizeof(int);
	cout << "Exercise 5: " << endl;
	reverseArrayEX5(tab,size);

}