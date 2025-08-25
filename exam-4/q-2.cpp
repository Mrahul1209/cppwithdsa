#include <iostream>
using namespace std;

int main() 
{
    int row, col;

    cout << "Enter the row: ";
    cin >> row;

    cout << "Enter the col: ";
    cin >> col;

    int a[row][col];

    cout <<endl << "Array input";

    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            cout << "Element a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    int max = a[0][0];
    for (int i = 0; i < row; i++)
     {
        for (int j = 0; j < col; j++) 
        {
            if (a[i][j] > max) 
            {
                max = a[i][j];
            }
        }
    }

    cout << "The largest number is " << max << endl;
}
