#include <iostream>
#define M 3
#define N 5
using namespace std;

int tab[3][5] = { {1, 100, 8, 50000, -1},
                {0, 1, 2, -2, 100},
                {10, 11, 12, -21, 100} };

void sumOfSquaresInRow() {
    long long int results[M] = {0};
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            results[i] += (long long)tab[i][j] * (long long)tab[i][j];
        }
    }
    for (int k = 0; k < M; k++) {
        cout << "Sum of squares in " << k + 1 << " row is " << results[k] << endl;
    }
}

void sumOfSquaresInColumn() {
    long long int results[N] = { 0 };
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            results[i] += (long long)tab[j][i] * (long long)tab[j][i];
        }
    }
    for (int k = 0; k < N; k++) {
        cout << "Sum of squares in " << k + 1 << " column is " << results[k] << endl;
    }
}

void leastSquaresSumInRow() {
    int smallestNumber[M] = {tab[0][0]*tab[0][0],tab[1][0]*tab[1][0],tab[2][0]*tab[2][0]};
    int smallestNumberIndex[M][2] = { };
    for (int i = 0; i < M; i++) {
        smallestNumberIndex[i][0] = i;
        smallestNumberIndex[i][1] = 0; // The column index of the initial smallest value
    }

    for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if ((long long)tab[i][j]*(long long)tab[i][j] < smallestNumber[i]) {
                    smallestNumber[i] = (long long)tab[i][j] * (long long)tab[i][j];
                    smallestNumberIndex[i][0] = i;
                    smallestNumberIndex[i][1] = j;
                }
            }
            cout << "Smallest sum of square is " << smallestNumber[i] << " Index of this number is " << smallestNumberIndex[i][0] << " " << smallestNumberIndex[i][1] << endl;
        }
    

    
}

void leastSquaresSumInColumn() {
    long long int smallestNumber[N] = { tab[0][0] * tab[0][0],tab[0][1] * tab[0][1],tab[0][2] * tab[0][2],(long long)tab[0][3] * (long long)tab[0][3],tab[0][4] * tab[0][4], };
    int smallestNumberIndex[N][2] = { };
    for (int i = 0; i < N; i++) {
        smallestNumberIndex[i][0] = 0;
        smallestNumberIndex[i][1] = i; // The column index of the initial smallest value
    }

    for (int i = 0; i < N; i++) {
        for (int j = 1; j < M; j++) {
            if ((long long)tab[j][i] * (long long)tab[j][i] < smallestNumber[i]) {
                smallestNumber[i] = (long long)tab[j][i] * (long long)tab[j][i];
                smallestNumberIndex[i][0] = j;
                smallestNumberIndex[i][1] = i;
            }
        }
        cout << "Smallest sum of square is " << smallestNumber[i] << " Index of this number is " << smallestNumberIndex[i][0] << " " << smallestNumberIndex[i][1] << endl;
    }
}

int main()
{
    cout << "The sum of squares of the elements in the row" << endl;
    sumOfSquaresInRow();
    cout << "The sum of squares of the elements in the column" << endl;
    sumOfSquaresInColumn();
    cout << "The indices of the least squares sums in the row for the resulting data structure" << endl;
    leastSquaresSumInRow();
    cout << "The indices of the least squares sums in the column for the resulting data structure" << endl;
    leastSquaresSumInColumn();
}