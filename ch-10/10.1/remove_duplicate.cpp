#include <iostream>
using namespace std;

main() {
    int size;

    cout << "Enter Number of Elements : ";
    cin >> size;

    int a[size];

    cout << endl << "Input of Elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Elements of a[" << i << "] : " ;
        cin >> a[i];
    }

    cout << endl << "Array Before Removing Duplicates" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl << "Array After Removing Duplicates" << endl;
    for (int i = 0; i < size; i++)
    {
        int isDuplicate = 0;
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                isDuplicate = 1;
                break;
            }
            
        }
        if(isDuplicate != 1) {
            cout << a[i] << " ";
        }
    }
    
}