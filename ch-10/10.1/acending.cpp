#include <iostream>
using namespace std;

 main() 

 {
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

   
    int a[size];

    cout << "Array input:" << endl;

    for(int i = 0; i < size; i++)
    {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(a[i] > a[j])
            {
                
                int c = a[i];
                a[i] = a[j];
                a[j] = c;

             
            }
        }
    }

    cout << "array output:" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << "a[" << i << "]: " << a[i] << endl; 
    }

}

