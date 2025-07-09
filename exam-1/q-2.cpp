#include <iostream>
using namespace std;

main()

{
        int num;

        cout << "enter your Number :";
        cin>>num;

        if(num%2==0)
        {
            cout << "number is even" << endl;
        }
        else 
        {
            cout << "number is odd" << endl;
        }

        if(num%5==0)
        {
            cout << "is divisible by 5"<<endl;
        }
        else
        {
            cout << "is not divisible by 5"<<endl;
        }
}