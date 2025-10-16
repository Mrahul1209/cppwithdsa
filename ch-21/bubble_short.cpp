#include <iostream>
using namespace std;

void bubble_sort(int a[],int size)
{
    int pass = 1;
    while (pass < size)
    {
        for (int i = 0; i < size; i++)
        {
           if (a[i] > a[i+1])
           {
                int swap = a[i];
                a[i] = a[i+1];
                a[i+1] = swap;
           }
           
        }
        pass++;
        
    }
    
}

int main()

{
    int size;

    cout << "Enter Your Size :";
    cin >> size;

    int a[size];

    cout << endl << "Array Input ..." << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> a[i];
    }

       cout << endl << "Array Output ..." << endl;

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
      
    }

    cout << endl;

    bubble_sort(a ,size);

     cout << endl << "Array shorting ..." << endl;

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
      
    }
    
}