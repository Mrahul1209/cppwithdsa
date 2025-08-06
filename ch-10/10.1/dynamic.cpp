#include <iostream>
using namespace std;

main()

{
    int size;

    cout << "enter your size :";
    cin>>size;

    int a[size];

    cout << "Array input" << endl;

    for(int i=0;i<size;i++)
    {
        cout << "enter elements a["<< i << "] :";
        cin >> a[i];
    }

     cout << "Array output" << endl;

     for(int i=0;i<size;i++)
    {
        cout << a[i] << "\t";
    }

    int sum=0;

    for(int i=0;i<size;i++)
    {
        sum+=a[i];
    }
    cout <<endl <<"Array sum:" << sum << endl;

     cout <<endl <<"Array avg:" <<(float) sum/size<< endl;
}