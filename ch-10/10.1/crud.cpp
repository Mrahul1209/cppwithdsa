#include <iostream>
#include <cstdlib>
using namespace std;

main()

{
    int size;

    cout << "Enter your elements :";
    cin>>size;

    int a[size];

    cout << "Array input" << endl;

    for(int i=0;i<size;i++)
    {
        cout << "a["<< i <<"]:";
        cin>>a[i];
    }

    int n;

    cout << system("cls");

    do{

    cout << "press 1 for Insret"<<endl;
    cout << "press 2 for push"<<endl;
    cout << "press 3 for fetch"<<endl;
    cout << "press 4 for update"<<endl;
    cout << "press 5 for delete"<<endl;
    cout << "press 6 for pop"<<endl;
    cout << "press 0 for exit"<<endl;

    cout << "enter your Elements :";
    cin>>n;

    switch (n)
    {
    case 1:
        system("cls");
        cout << "INSERT" << "\t";
        int pos,element;
        cout << "enter your index :";
        cin>>pos;
        cout << "enter your New elements :";
        cin>>element;

        if(pos<size && pos>=0)
        {

        for(int i=size-1; i>=pos; i--)
        {
            a[i+1]=a[i];
        }

        a[pos]=element;
        size++;

        }
        break;
     case 2:
        system("cls");
        cout << "PUSH";
        break;
     case 3:
        system("cls");
        cout << "FETCH" << "\t";
        for(int i=0;i<size;i++)
        {
            cout << a[i]<< "\t";
        }
        break;
     case 4:
        system("cls");
        cout << "UPDATE";
        break;
     case 5:
        system("cls");
        cout << "DELETE";
        break;
     case 6:
        system("cls");
        cout << "POP";
        break;
     case 0:
        system("cls");
        cout << "EXIT";
        break;
    default:
     system("cls");
     cout << "INVALID NUMBER" << endl;
        break;
    }

}while (n!=0);
    
 
    
}

