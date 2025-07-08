#include <iostream>
using namespace std;

main()

{
    int num;

    cout << "enter your number :";
    cin>>num;

    (num%2==0)
    ? cout << num << "even " << endl
    : cout << num << "odd";
}