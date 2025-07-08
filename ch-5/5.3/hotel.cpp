#include <iostream>
#include <cstdlib>
using namespace std;

main()

{
    cout << "WELCOME TO MY HOTEL .........." << endl;


    cout << "press 1 for GUJARATI" << endl;
    cout << "press 1 for PUNJABI" << endl;
    cout << "press 1 for SOUTH INDIAN" << endl;

    int num;
    cout << "enter your number :";
    cin>>num;

    switch (num)
    {
    case 1:
        system("cls");
        cout << "GUJARATI MENU"<< endl;

        cout << "press 1 for ras puri" << endl;
        cout << "press 2 for khaman dhokla"<< endl;
        cout << "press 3 for dal bhat" << endl;

        int choice;
        cout << "enter your choice :";
        cin>>choice;



            switch(choice)
            {
            case 1:
            system("cls");
                cout << "your order is ras puri ready" << endl;
                break;
            case 2:
            system("cls");
                cout << "your order is khaman dhokla ready" << endl;
                break;
            case 3:
            system("cls");
                cout << "your order is dal bhat ready" << endl;
                break;
            default:
                cout << "invalid order ....." << endl;
                break;
            }
        break;
    case 2:
            system("cls");
        cout << "PUNJABI MENU"<< endl;

        cout << "press 1 for panir tikka" << endl;
        cout << "press 2 for kaju kari"<< endl;
        cout << "press 3 for panir handi" << endl;

        cout << "enter your choice :";
        cin>>choice;




         switch(choice)
            {
            case 1:
            system("cls");
                cout << "your order is panir tikka ready" << endl;
                break;
            case 2:
            system("cls");
                cout << "your order is kaju kari ready" << endl;
                break;
            case 3:
            system("cls");
                cout << "your order is panir handi ready" << endl;
                break;
            default:
                cout << "invalid order ....." << endl;
                break;
            }


        break;
    case 3:
            system("cls");
     cout << "SOUTH INDIAN MENU"<< endl;

     
    cout << "press 1 for idali sambar" << endl;
    cout << "press 2 for dhossa"<< endl;
    cout << "press 3 for curry" << endl;

     cout << "enter your choice :";
     cin>>choice;


             switch(choice)
            {
            case 1:
            system("cls");
                cout << "your order is idali sambar ready" << endl;
                break;
            case 2:
            system("cls");
                cout << "your order is dhossa ready" << endl;
                break;
            case 3:
            system("cls");
                cout << "your order is curry ready" << endl;
                break;
            default:
                cout << "invalid order ....." << endl;
                break;
            }
        break;
    default:
            cout << "invalid order...." << endl;
        break;
    }



}