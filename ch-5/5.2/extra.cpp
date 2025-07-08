#include <iostream>
using namespace std;

main()

{
    int a,b,c,d,e;

    cout << "enter a number :";
    cin>>a;

    cout << "enter b number :";
    cin>>b;

    cout << "enter c number :";
    cin>>c;

    cout << "enter d number :";
    cin>>d;

    cout << "enter e number :";
    cin>>e;

    if(a>b)
    {
            if(a>c)
            {
                if(a>d)
                {
                    if(a>e)
                    {
                        cout << "a is max :" << a << endl;
                    }
                    else 
                    {
                        cout << "e is max :" << e << endl;
                    }
                }
                else
                {
                    if(d>e)
                    {   
                        cout << "d is max :"<< d << endl;
                    }
                    else
                    {
                        cout << "e is max :" << e << endl;
                    }
                }
            }
            else
            {
                if(c>d)
                {
                    if(c>e)
                    {
                        cout << "c is max :"<< c << endl;
                    }
                    else
                    {
                        cout << "e is max :" << e << endl;
                    }
                }
                else
                {
                    if(d>e)
                    {
                        cout << "d is max :"<< d << endl;
                    }
                    else
                    {
                        cout << "e is max :" << e << endl;
                    }
                }
            }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                if(b>e)
                {
                    cout << "b is max :" << b << endl;
                }
                else
                {
                    cout << "e is max :" << e << endl;                
                }
            }
            else
            {
                if(d>e)
                {
                    cout << "d is max:" << d << endl;
                }
                else
                {
                    cout << "e is max :" << e << endl;
                }
             }
        }
        else
        {
            if(c>d)
            {
                if(c>e)
                {
                    cout << "c is max:"<< c << endl;
                }
                else
                {
                    cout << "e is max :"<< e <<endl;
                }
            }
            else
            {
                if(d>e)
            {
                cout << "d is max:"<< d << endl;
            }
            else
            {
                cout << "e is max :" << e << endl;
            }
        }
    }
}
    

   
}