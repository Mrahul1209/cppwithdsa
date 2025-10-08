#include <iostream>
#include "linkedlist.cpp"
using namespace std;

int main()
{
    Linked r12;

    int ch;
    int elements;
    int position;

    do
    {

        cout << "1 insert at beginning" << endl;
        cout << "2 search data" << endl;
        cout << "3 delete data at position" << endl;
        cout << "4 reverse" << endl;
        cout << "5 display all data" << endl;
        cout << "0 exit" << endl;
        cout << "Enter your choice:";
        cin >> ch;
        cout << endl;
        switch (ch)
        {
        case 1:
            cout << "Enter  your data: ";
            cin >> elements;
            r12.insertatbeginning(elements);
            break;
        case 2:
            cout << "Enter position for data: ";
            cin >> position;
            r12.search(position);
            break;
        case 3:
            cout << "Enter position to delete data: ";
            cin >> position;
            r12.deleteatposition(position);
            break;
        case 4:
            r12.reverse();
            break;
        case 5:
            r12.display();
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again......." << endl;
            break;
        }
    } while (ch != 0);
}