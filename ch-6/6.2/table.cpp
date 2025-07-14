#include <iostream>
using namespace std;

main()

{
    int n;

    cout << "Enter Your Number : ";
    cin>>n;

    int a=1;

    while (a<=10)
    {
        cout << n << "*"  << a << "=" << n*a << endl;
        a++;
    }
    
} 