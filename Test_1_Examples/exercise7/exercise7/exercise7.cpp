#include <iostream>
using namespace std;

// Funkcja przyjmuje tablicę znaków i jej rozmiar
int countDigits(char arr[], int size) {
    int counter = 0; // Licznik cyfr

    for (int i = 0; i < size; i++) {
        // Sprawdzamy w tablicy ASCII czy znak jest pomiędzy '0' a '9'
        if (arr[i] >= '0' && arr[i] <= '9') {
            counter++;
        }
    }
    return counter;
}

int main() {
    // Przykładowa tablica: ma 4 litery i 3 cyfry
    char text[] = { 'A', 'l', 'a', '1', '2', '3', '!' };
    int size = 7;

    cout << "Liczba cyfr: " << countDigits(text, size) << endl; // Wynik: 3

    return 0;
}