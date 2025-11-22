#include <iostream>
# define M 3
#define N 5

using namespace std;



int tab[M][N] = { {1, 100, 8, 90, -1},
                  {0, 1, 2, -2, 100},
                  {10, 11, 12, -21, 100}};

int rows = 3, columns = 5;

int arrayPrinter(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;    
    return 0;
}

int smallestValueInRow() {
    int smallestValueArray[M] = {};
    for (int i = 0; i < M; i++) {
        int smallestValue = tab[i][0];
        for (int j = 0; j < N; j++) {
            if (tab[i][j] < smallestValue) {
                smallestValue = tab[i][j];
            }
        }
        smallestValueArray[i] = smallestValue;
    }
    arrayPrinter(smallestValueArray, 3);
    return 0;
}

int biggestValueInRow() {
    int biggestValueArray[M] = {0};
    for (int i = 0; i < M; i++) {
        biggestValueArray[i] = tab[i][0];
        //int biggest = tab[i][0];
        for (int j = 1; j < N; j++) {
            if (tab[i][j] >biggestValueArray[i]) {
                biggestValueArray[i] = tab[i][j];
            }
        }
        //biggestValueArray[i] = biggest;
    }
    arrayPrinter(biggestValueArray, 3);
    return 0;
}

int smallestValueInColumn() {
    int smallestValueArray[5] = {};
    for (int i = 0; i < columns; i++) {
        int smallestValue = tab[0][i];
        for (int j = 0; j < rows; j++) {
            if (tab[j][i] < smallestValue) {
                smallestValue = tab[j][i];
            }
        }
        smallestValueArray[i] = smallestValue;
    }
    arrayPrinter(smallestValueArray,5);
    return 0;
}

int biggestValueInColumn() {
    int biggestValueArray[5] = {};
    for (int i = 0; i < columns; i++) {
        int biggest = tab[0][i];
        for (int j = 0; j < rows; j++) {
            if (tab[j][i] > biggest) {
                biggest = tab[j][i];
            }
        }
        biggestValueArray[i] = biggest;
    }
    arrayPrinter(biggestValueArray, 5);
    return 0;
}

int highestLowestIndex() {
    int biggest = tab[0][0];
    int lowest = tab[0][0];
    int biggestIndex[2] = {};
    int lowestIndex[2] = {};
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (tab[i][j] > biggest) {
                biggest = tab[i][j];
                biggestIndex[0] = i;
                biggestIndex[1] = j;
            }
            if (tab[i][j] < lowest) {
                lowest = tab[i][j];
                lowestIndex[0] = i;
                lowestIndex[1] = j;
            }
        }
      
    }
    cout << "Biggest value is " << biggest << " Index of this number: " << biggestIndex[0]<<" " << biggestIndex[1] << endl;
    cout << "Lowest value is " << lowest << " Index of this number: " << lowestIndex[0]<<" " << lowestIndex[1] << endl;
    return 0;
}

int lowestSquare() {
    int minSquare = tab[0][0] * tab[0][0];
    int number = tab[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (tab[i][j] * tab[i][j] < minSquare) {
                minSquare = tab[i][j] * tab[i][j];
                number = tab[i][j];
            }
        }

    }
    cout << "Min square number is " << number << " square of it is " << minSquare << endl;
    return 0;
}

int displayArray() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << tab[i][j]<<" ";
        }
        cout << endl;

    }
    return 0;
}

int sumOfSquare() {
    int sumOfSquare = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sumOfSquare += (tab[i][j]) * (tab[i][j]);
        }
        
    }
    cout << "Sum of squares: " << sumOfSquare << endl;
    return 0;
}

int transposition() {
    cout << "Transposition: " << endl;
    int AR[5][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            AR[j][i] = tab[i][j];
        }
    }
    for (int w = 0; w < columns; w++) {
        for (int z = 0; z < rows; z++) {
            cout << AR[w][z] << " ";
        }
        cout << endl;

    }
    return 0;
}
int main()
{
    displayArray();
    cout << "==============================" << endl;
    cout << "Smallest value in each row: " << endl;
    smallestValueInRow();
    cout << "=============================="<< endl;
    cout << "Smallest value in each column: " << endl;
    smallestValueInColumn();
    cout << "==============================" << endl;
    cout << "Biggest value in each column: " << endl;
    biggestValueInColumn();
    cout << "==============================" << endl;
    cout << "Biggest value in each row: " << endl;
    biggestValueInRow();
    cout << "==============================" << endl;
    highestLowestIndex();
    cout << "==============================" << endl;
    lowestSquare();
    cout << "==============================" << endl;
    sumOfSquare();
    cout << "==============================" << endl;
    transposition();
}
