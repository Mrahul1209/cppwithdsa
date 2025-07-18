#include <iostream>
using namespace std;

main()

{
    long int n;

    cout << "enter your Number :";
    cin>>n;

    int count=0;

    do
    {
        
        n=n/10;
        count++;
    } while (n!=0);

    cout << "Total Number of Digit :"<<  count <<endl;
    
}