#include <iostream>
using namespace std;

int main() 
{
    int size;

    cout << "Enter size: ";
    cin >> size;

    int a[size];

    cout <<endl << "Array Input";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
    }

    cout <<endl << "Negative Elements in Array:";
    for (int i = 0; i < size; i++) 
    {
        if (a[i] < 0) 
        {
            cout << a[i] << " ";
        }
    }

    cout << endl;
}
