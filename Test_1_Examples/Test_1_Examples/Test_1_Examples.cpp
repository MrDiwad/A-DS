#include <iostream>
using namespace std;

int tab[3][5] = { {1, 100, 8, 90, -1},
                  {0, 1, 2, -2, 100},
                  {10, 11, 12, -21, 100}};

int rows = 3, columns = 5;

int smallestValueInRow() {
    for (int i = 0; i < rows; i++) {
        int smallestValue = tab[i][0];
        for (int j = 0; j < columns; j++) {
            if (tab[i][j] < smallestValue) {
                smallestValue = tab[i][j];
            }
        }
        cout << "Smallest value in " << i + 1 << " row is " << smallestValue << endl;
    }
    return 0;
}

int biggestValueInRow() {
    for (int i = 0; i < rows; i++) {
        int biggest = tab[i][0];
        for (int j = 0; j < columns; j++) {
            if (tab[i][j] >biggest) {
                biggest = tab[i][j];
            }
        }
        cout << "Biggest value in " << i + 1 << " row is " << biggest << endl;
    }
    return 0;
}

int smallestValueInColumn() {
    for (int i = 0; i < columns; i++) {
        int smallestValue = tab[0][i];
        for (int j = 0; j < rows; j++) {
            if (tab[j][i] < smallestValue) {
                smallestValue = tab[j][i];
            }
        }
        cout << "Smallest value in " << i + 1 << " column is " << smallestValue << endl;
    }
    return 0;
}

int biggestValueInColumn() {
    for (int i = 0; i < columns; i++) {
        int biggest = tab[0][i];
        for (int j = 0; j < rows; j++) {
            if (tab[j][i] > biggest) {
                biggest = tab[j][i];
            }
        }
        cout << "Biggest value in " << i + 1 << " column is " << biggest << endl;
    }
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
            else if (tab[i][j] < lowest) {
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
    smallestValueInRow();
    cout << "=============================="<< endl;
    smallestValueInColumn();
    cout << "==============================" << endl;
    biggestValueInColumn();
    cout << "==============================" << endl;
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
