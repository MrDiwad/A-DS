#include <iostream>
using namespace std;

float inverseDiagonal(float A[][3], int c) {
    float sum = 0;
    for (int i = 0; i < c; i++) {
        sum += (A[i][c - 1 - i] * A[i][c - 1 - i]);
    }
    return sum;
}

int main() {
    float tab[3][3] = {
    {3,2,5},
    {6,4,2},
    {8,1,9}
    };
    int columns = 3;
    cout << "Sum of square of inverse digonal is: " << inverseDiagonal(tab, columns) << endl;
}