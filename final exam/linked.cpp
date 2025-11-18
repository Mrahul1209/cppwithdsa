#include <iostream>
using namespace std;

class Node
{
public:
    int Data;
    Node *Next;
    Node(int data)
    {
        this->Data = data;
        this->Next = nullptr;
    }
};

class Linked
{
public:
    Node *Head;
    int count;
    Linked()
    {
        Head = nullptr;
        count = 0;
    }
    void insert(int data)
    {
        Node *newNode = new Node(data);
        newNode->Next = this->Head;
        this->Head = newNode;
        this->count++;
    }
    void search(int data)
    {
        Node *ptr = this->Head;
        while (ptr != nullptr)
        {
            if (ptr->Data == data)
            {
                cout << "Element Found" << endl;
            }
            else
            {
                cout << "Element not Found" << endl;
            }
            ptr = ptr->Next;
        }
    }
    int Delete(int data)
    {
        Node *ptr = this->Head;
        while (ptr != NULL)
        {
            if (ptr->Data == data)
            {
                delete ptr;
                cout << "Element Deleted" << endl;
                return 1;
            }
            ptr = ptr->Next;
        }
    }

    void fetch()
    {
        Node *ptr = this->Head;
        while (ptr != nullptr)
        {
            cout << ptr->Data << " ";
            ptr = ptr->Next;
        }
    }
};

int main(int argc, char const *argv[])
{
    Linked l1;

    int ch, data;

    do
    {
        cout << endl
             << endl
             << endl;
        cout << " 1 for Insert" << endl;
        cout << "2 to Search" << endl;
        cout << "3 to Delete" << endl;
        cout << " 4 to Fetch Data" << endl;
        cout << " 0 to Exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << endl
                 << endl;
            cout << "Enter the Data:= ";
            cin >> data;
            l1.insert(data);
            break;

        case 2:
            cout << endl
                 << endl;
            cout << "Enter the Element to Search := ";
            cin >> data;
            l1.search(data);
            break;

        case 3:
            cout << endl
                 << endl;
            cout << "Enter the Element to Delete := ";
            cin >> data;
            l1.Delete(data);
            break;

        case 4:
            cout << endl
                 << endl;
            cout << "Fetch Data := ";
            l1.fetch();
            break;

        case 0:
            cout << "try again....";
            break;
        default:
            cout << endl
                 << endl
                 << "Invalid choice please try again......." << endl;
            break;
        }
    } while (ch != 0);
}
