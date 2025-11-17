#include "Sorting.cpp"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    Sorting sorter;
    int n, ch, target, ind;

    cout << "Enter your Elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << endl
         << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter array element of a[" << i << "] : ";
        cin >> arr[i];
    }

    do
    {
        cout << endl
             << endl;
        cout << " 1 for Selection Sort" << endl;
        cout << " 2 for Merge Sort" << endl;
        cout << " 3 for Binary Search after Merge Sort" << endl;
        cout << " 4 for Display Array" << endl;
        cout << " 5 for Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            sorter.selectionsort(arr);
            cout << "Array selection Sort : ";
            sorter.display(arr);
            break;

        case 2:
            sorter.mergeSort(arr, 0, n - 1);
            cout << "Array Merge Sort : ";
            sorter.display(arr);
            break;

        case 3:

            cout << "Searching and sorting." << endl
                 << endl;
            sorter.mergeSort(arr, 0, n - 1);
            cout << "Enter element to search: ";
            cin >> target;
            ind = sorter.binarySearch(arr, 0, n - 1, target);
            if (ind == -1)
                cout << "Element not found....";
            else
                cout << "Element is Here : " << ind << endl;
            break;

        case 4:
            cout << "Array elements are: ";
            sorter.display(arr);
            break;

        case 5:
            cout << "Exiting the sorting and searching program.....!!!!!!" << endl;
            break;
        }

    } while (ch != 5);
}