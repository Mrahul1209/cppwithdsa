#include <iostream>
using namespace std;

main()

{
    int a,b,c;

    cout << "enter first number :";
    cin >>a;

    cout << "enter second number :";
    cin >>b;

    c=a;
    a=b;
    b=c;

    cout << "a :" << a << endl;
    cout << "b :" << b << endl;


}