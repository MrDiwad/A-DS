#include <iostream>
using namespace std;

float tab[3][3] = {
    {3,2,5},
    {6,4,2},
    {8,1,9}
};
int columns = 3;

int squareDiagonal(float A[][3],int c) {
    float sum = 0;
    for (int i = 0; i < c; i++) {
        sum += (A[i][i] * A[i][i]);
    }
    cout << "Sum of square of diagonal is " << sum<<endl;
    return 0;
}

int main()
{
    squareDiagonal(tab, columns);
}