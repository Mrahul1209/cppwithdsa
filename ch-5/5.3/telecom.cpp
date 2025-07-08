#include <iostream>
#include <cstdlib>
using namespace std;
 
main()

{
    cout << ".......WELCOME........." << endl;

    cout << "press 1 for English" << endl;
    cout << "press 2 for Hindi" << endl;
    cout << "press 3 for Gujarati" << endl;

    int num;
    cout << "enter your number :";
    cin>>num;

    switch (num)
    {
    case 1:
    system("cls");
        cout << "English Telecom Service........" << endl<<endl;

        cout << "Press 1 for Internet Recharge" << endl;
        cout << "Press 2 for Top-up Recharge"<< endl;
        cout << "Press 3 for Special Recharge"<< endl;

        int choice;
        cout << "enter your choice :";
        cin>>choice;

            switch (choice)
            {
            case 1:
            system("cls");
                cout << "You have successfully done a Internet Recharge." << endl;
                break;
            case 2:
            system("cls");
                cout << "You have successfully done a Top-up Recharge." << endl;
                break;
             case 3:
             system("cls");
                cout << "You have successfully done a Special Recharge." << endl;
                break;
            
            default:
                cout << "Invalid Recharge........" << endl;
                break;
            }
        break;
    case 2:
    system("cls");
        cout << "Hindi Telecom Service..........." << endl << endl;

        cout << "Internet Recharge ke liye 1 dabaiye" << endl;
        cout << "Top-up Recharge ke liye 2 dabaiye"<< endl;
        cout << "Special Recharge ke liye 3 dabaiye"<<endl;

        cout << "enter your choice :";
        cin>>choice;

             switch (choice)
            {
            case 1:
            system("cls");
                cout << "Aapne safaltapurvak Internet Recharge kar liya he." << endl;
                break;
            case 2:
            system("cls");
                cout << "Aapne safaltapurvak Top-up Recharge kar liya he." << endl;
                break;
             case 3:
             system("cls");
                cout << "Aapne safaltapurvak Special Recharge kar liya he." << endl;
                break;
            
            default:
                cout << "Invalid Recharge.........." << endl;
                break;
            }

            

        break;
     case 3:
     system("cls");
        cout << "Gujarati Telecom Service............." << endl<<endl;

        cout << "Internet Recharge mate 1 dabavo"<<endl;
        cout << "Top-up Recharge mate 2 dabavo"<<endl;
        cout << "Special Recharge mate 3 dabavo"<<endl;

        cout << "enter your choice :";
        cin>>choice;

            switch (choice)
            {
            case 1:
            system("cls");
                cout << "Tame safaltapurvak Internet Recharge karyu chhe." << endl;
                break;
            case 2:
            system("cls");
                cout << "Tame safaltapurvak Top-up Recharge karyu chhe." << endl;
                break;
             case 3:
             system("cls");
                cout << "Tame safaltapurvak Special Recharge karyu chhe." << endl;
                break;
            
            default:
                cout << "Invalid Recharge........." << endl;
                break;
            }
        break;
    
    default:
            cout << "your recharge is invalid .........."<<endl;
        break;
    }
   
}