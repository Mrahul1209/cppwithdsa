#include <iostream>
using namespace std;

int main()
{

    int row, col;

    cout << "Enter Row Size : ";
    cin >> row;
    cout << "Enter Column Size : ";
    cin >> col;

    int a[row][col];

    cout << endl
         << "Array Elements Input" << endl
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    int row, col;

    cout << endl
         << "Enter Row : ";
    cin >> row;

    cout << "Elements of Row : ";
    int rowsum = 0, colsum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == row)
            {
                rowsum += a[i][j];
                cout << a[i][j] << " , " ;
            }
        }
    }

    cout << endl << "Sum of Row : " << rowsum << endl;

    cout << endl
         << "Enter Column : ";
    cin >> col;

    cout << "Elements of Column : ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j == col)
            {
                colsum += a[i][j];
                cout << a[i][j] << " , " ;
            }
        }
    }

    cout << endl << "Sum of Column : " << colsum << endl;


}