#include <iostream>
using namespace std;

main()

{
    int size;

    cout << "enter your size :";
    cin>>size;

    int a[size],b[size];

    cout << " first Array input" << endl;

    for(int i=0;i<size;i++)
    {
        cout << "enter elements a["<< i << "] :";
        cin >> a[i];
    }

     cout << "second Array inpur" << endl;

    for(int i=0;i<size;i++)
    {
        cout << "enter elements b["<< i <<"]:";
        cin >> b[i];
    }

    int sum[size];
    for(int i=0;i<size;i++)
    {
        sum[i]= a[i]+b[i];   
    }

    cout << "Array sum :" << endl;

    for(int i=0;i<size;i++)
    {
        cout << sum[i]<< " ";
    }
        
    }