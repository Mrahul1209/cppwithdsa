#include <iostream>
using namespace std;

main()

{
    int num;

    cout << "enter your number :";
    cin>>num;

    if(num>0)
    {
        cout <<"number is positive"<< num << endl;
    }
    else if(num<0) 
    {
        cout << "number is Negative" << num << endl;
    }
    else
    {
        cout << "number is Zero" << endl;
    }
}