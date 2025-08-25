#include <iostream>
using namespace std;

main() {
    int size;

    cout << "Enter Number of elements : ";
    cin >> size;

    int a[size];

    cout << endl << "Input of Elements of Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Elements of a[" << i << "] : ";
        cin >> a[i];
    }

    int n;
    cout << endl << "Enter Value of N to Find Pair" << endl;
    cout << "Enter Value : ";
    cin >> n;

    cout << endl << "The Value of Pairs to get the sum of " << n << endl;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            sum = a[i] + a[j];

            if(n == sum) {
                cout << a[i] << "," << a[j];
            }
        }
        cout << endl;
    }
    
    
}