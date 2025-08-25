#include <iostream>
using namespace std;

void printCubes(int* a, int size) 
{
    cout << endl <<"Cubes of all elements:";

    for (int i = 0; i < size * size; i++)
    {
        int val = *(a + i);
        int cube = val * val * val;
        cout << cube << " ";
    }
    cout << endl;
}

int main() 
{
    int size;

    cout << "Enter array's size: ";
    cin >> size;

    int a[size][size]; 

    cout << endl << "Enter array elements:";
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    printCubes(&a[0][0], size);
}
