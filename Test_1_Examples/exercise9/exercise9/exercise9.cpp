#include <iostream>
using namespace std;

void howManyLowers(char chars[],int size) {
	int counter = 0;
	for (int i = 0; i < size; i++) {
		if (chars[i] >= 'a' && chars[i] <= 'z') {
			counter++;
		}
	}
	cout << counter << endl;
}

int main()
{
	char tablicaLosowa[10] = {
	'Y', 'h', 'X', 'K', 'Z', 'p', 'G', 'j', 'L', 'm',};
	int length = sizeof(tablicaLosowa) / sizeof(tablicaLosowa[0]);
	howManyLowers(tablicaLosowa, length);
}