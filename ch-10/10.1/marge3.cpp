#include <iostream>
using namespace std;

main()

{
    int size1,size2,size3;

    cout << "enter your size1:";
    cin>>size1;
    cout << "enter your size2 :";
    cin>>size2;
    cout << "enter your size3 :";
    cin>>size3;

    int a[size1],b[size2],c[size3];

    cout << "first Array input :" << endl;

    for(int i=0;i<size1;i++)
    {
        cout << "elements a[" << i <<"]:";
        cin >>a[i];
    }

    cout << "second Array input :" << endl;

    for(int i=0;i<size2;i++)
    {
        cout << "elements b[" << i <<"]:";
        cin >>b[i];
    }

    cout << "third Array input :" << endl;

    for(int i=0;i<size3;i++)
    {
        cout << "elements c[" << i <<"]:";
        cin >>c[i];
    }

    int marge[size1+size2+size3];
    for(int i=0;i<size1;i++)
    {
        marge[i]=a[i];
    }

    for(int i=0;i<size2;i++)
    {
        marge[i+size1]=b[i];
    }
    
    for(int i=0;i<size3;i++)
    {
       marge[i+size1+size2]=c[i];
    }
    for(int i=0;i<size1+size2+size3;i++)
    {
        cout << marge[i]<< "\t";
    }
}