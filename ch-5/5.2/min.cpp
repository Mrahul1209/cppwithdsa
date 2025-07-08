#include <iostream>
using namespace std;

main()

{
    int a,b,c;

    cout << "enter a number :";
    cin>>a;

    cout << "enter b number :";
    cin>>b;

    cout << "enter c number :";
    cin>>c;

   if(a==b && a==c && b==c)
    {
        cout << "All are equal...!!!!"<< endl;
    }
    else if(a==b || a==c || b==c)
    {
        cout << "Both are equal.....!!!" << endl;
    }
    else 
    {
         if(a<b)
    {
        if(a<c)
        {
            cout << "a is min " << a << endl;
        }
        else
        {
            cout << "c is min" << c << endl;
        }
    }
    else
    {
        if(b<c)
        {
            cout << "b is min"<< b << endl;
        }
        else
        {
            cout << "c is min"<< c << endl;
        }
    }
    }
}