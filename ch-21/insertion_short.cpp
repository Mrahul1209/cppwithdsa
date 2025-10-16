#include <iostream>
using namespace std;

void insertion(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j+1]= a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()

{
    int size;

    cout << "enter your size :";
    cin >> size;

    int a[size];

    cout << endl
         << "Array Input " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Elements : a[" << i << "] :";
        cin >> a[i];
    }

    cout << endl
         << "Array Output " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    insertion(a,size);

     cout << endl
         << "Array sorted " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}