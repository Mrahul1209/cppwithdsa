#include <iostream>
using namespace std;

void insertion(int a[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j  + 1] = key;
    }
}

int main()

{
    int size;

    cout << "enter your size :";
    cin >> size;

    int a[size];

    cout << "Array Input " << endl;

    for (int i = 0; i < size; i++)
    {

        cout << "Elements a[" << i << "] :";
        cin >> a[i];
    }

    cout << "Array Output " << endl
         << endl;

    for (int i = 0; i < size; i++)
    {

        cout << a[i] << " ";
    }

    cout << endl;

    insertion(a, size);

    cout << "Array shorted " << endl
         << endl;

    for (int i = 0; i < size; i++)
    {

        cout << a[i] << " ";
    }
}