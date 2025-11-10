#include <iostream>
using namespace std;

/*
int main() {
    int numbers[5] = { 10, 20, 30, 40, 50 };
    int i = 0;
    //int length = sizeof(numbers) / sizeof(int);
    numbers[5] = 7;
    cout << numbers[5] << "\n";
    int length = sizeof(numbers) / sizeof(int);
    //using while loop to access all
    //elements of the array
    while (i < length) {
        cout << numbers[i] << "\n";
        i++;
    }
    return 0;
}

*/

// for a given array name suma of kwadraty elements

int main() {
    int numbers[5] = { 1,100,10000,1000000,10000000 };
    //int tab[0];
    int length = sizeof(numbers) / sizeof(numbers[0]);
    if (length > 0) {
        long long int suma = 0;

        for (int i = 0; i < length; i++) {
            suma += (long long int)numbers[i] * (long long int)numbers[i];
        }
        cout << suma << endl;
    }
    else {
        cout << "Tab length is <= 0" << endl;
    }
   
}