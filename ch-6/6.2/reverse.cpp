#include <iostream>
using namespace std;

main()

{
    int n;
    int rem;
    int reverse=0;

    cout << "enter your NUmber :";
    cin>>n;

    while(n!=0)
    {
        rem=n%10;

       reverse =reverse*10+rem;

       n=n/10;


    }
        cout << reverse << endl;
}