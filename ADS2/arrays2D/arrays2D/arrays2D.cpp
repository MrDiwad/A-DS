#include <iostream>
using namespace std;

int rotationRIGHT90() {

    int A[3][4] = {
      {0, 1, 2, 3},
      {4, 5, 6, 7},
      {8, 9, 10, 11}
    };

    int AR[4][3];
    int n = 4, m = 3;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            AR[j][m - 1 - i] = A[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << AR[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int rotationLEFT90() {
    int A[3][4] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11}
    };

    int AR[4][3];
    int n = 4, m = 3;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            AR[n-1-j][i] = A[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << AR[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
int rotation180() {
    int A[3][4] = {
  {0, 1, 2, 3},
  {4, 5, 6, 7},
  {8, 9, 10, 11}
    };

    int AR[3][4];
    int n = 3, m = 4;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            AR[n-i-1][m - 1 - j] = A[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << AR[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
int rotation0360() {
    int A[3][4] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11}
    };
    int n = 3, m = 4;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
int main()
{
    cout << "Rotation 0 or 360: " << endl;
    rotation0360();
    cout << "Rotation 90 right (270 left): " << endl;
    rotationRIGHT90();
    cout << "Rotation 90 left (270 right): " << endl;
    rotationLEFT90();
    cout << "Rotation 180: " << endl;
    rotation180();
}
