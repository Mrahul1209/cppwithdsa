#include <iostream>
#include "Escalator.cpp"
using namespace std;


int main()

{

    int size;
    cout << "Enter your stack size: ";
    cin >> size;

    Stack s1(size);
    int choice;
    int element;

    do
    {
        cout << endl << "----- Menu -----" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. isEmpty" << endl;
        cout << "5. isFull" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter element to Elements : ";
            cin >> element;
            s1.push(element);
            break;
        case 2:
            s1.pop();
            break;
       
        case 3:
            s1.display();
            break;
        case 4:
            cout << (s1.isEmpty() ? "Stack is empty" : "Stack is not empty") << endl;
            break;
        case 5:
            cout << (s1.isFull() ? "Stack is full" : "Stack is not full") << endl;
            break;
        case 0:
            cout << ".....Exiting..." << endl;
            break;
        default:
            cout << ".........Invalid choice!" << endl;
        }

    } while (choice != 0);

   
}