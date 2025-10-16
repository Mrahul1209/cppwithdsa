#include <iostream>
using namespace std;

void selection(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int min = i;

        for (int j = i + 1; j < size; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        int swap = a[i];
        a[i] = a[min];
        a[min] = swap;
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

    cout << "Array Output " << endl << endl;

    for (int i = 0; i < size; i++)
    {

        cout << a[i] << " ";
    }

    cout << endl;

    selection(a, size);

    cout << "Array shorted " << endl
         << endl;

    for (int i = 0; i < size; i++)
    {

        cout << a[i] << " ";
    }
}