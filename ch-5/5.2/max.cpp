#include <iostream>
using namespace std;

main()

{
    int a,b,c,d;

    cout << "enter a number :";
    cin>>a;

    cout << "enter b number :";
    cin>>b;

    cout << "enter c number :";
    cin>>c;

    cout << "enter d number :";
    cin>>d;

    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                cout << "a is max :" << a << endl;
            }
            else
            {
                cout << "d is max :" << d << endl;
            }
        }
        else
        {
            if(c>d)
            {
                cout << "c is max :" << c << endl;
            }
            else
            {
                cout << "d is max :" << d << endl;
            }
        }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                cout << "b is max :"<< b << endl;
            }
            else
            {
                cout << "d is max :" << d << endl;
            }
        }
        else
        {
            if(c>d)
            {
                cout << "c is max :" << c << endl;
            }
            else
            {
                cout << "d is max :" << d << endl;
            }
        }
    }

   
}