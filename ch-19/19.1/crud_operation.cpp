#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class linked
{
public:
    Node *head;
    int count;

    linked()
    {
        this->head = nullptr;
        this->count = 0;
    }

    void addbeginning(int data)
    {
        Node *newnode = new Node(data);
        newnode->next = this->head;
        this->head = newnode;
        this->count++;
    }

    void addending(int data)
    {
        Node *newnode = new Node(data);

        if (head == nullptr)
        {
            head = newnode;
        }
        else
        {
            Node *ptr = head;
            while (ptr->next != nullptr)
            {
                ptr = ptr->next;
            }
            ptr->next = newnode;
            this->count++;
        }
    }

    void position(int data, int position)
    {
        Node *newnode = new Node(data);

        if (this->head == nullptr || this->count == 0)
        {
            newnode->next = this->head;
            this->head = newnode;
        }
        else
        {
            if (position > 0 && position < count)
            {
                Node *ptr = this->head;

                for (int i = 0; i < position - 1; i++)
                {
                    ptr = ptr->next;
                }
                newnode->next = ptr->next;
                ptr->next = newnode;
            }
            else
            {
                cout << "Invalid Position ....!" << endl;
            }
        }
    }

    void update(int data,int position)
    {
        if (head == nullptr || count == 0)
        {
            cout << "list is Empty !!" << endl;
            return;
        }
        else
        {
            if (position == 0 || position > count)
            {
                cout << "position invalid" << endl;
                return;
            }
            
        }
        
    }

    void FetchAllNodes()
    {
        Node *ptr = head;

        while (ptr != nullptr)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
};

int main()
{
    linked l1;
    int choice;
    int data, position;

    do
    {
        cout << endl
             << "Menu:" << endl;
        cout << "1.for Insert at Beginning" << endl;
        cout << "2. for Insert at Endl" << endl;
        cout << "3. for  Insert at Position (Not implemented)" << endl;
        cout << "4 for update nodes" << endl;
        cout << "5 for delete beginning" << endl;
        cout << "6 for delete ending" << endl;
        cout << "7 for delete position" << endl;
        cout << "8. Display All Nodes" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter data: ";
            cin >> data;
            l1.addbeginning(data);
            break;

        case 2:
            cout << "Enter data: ";
            cin >> data;
            l1.addending(data);
            break;

        case 3:
            cout << "Enter data: ";
            cin >> data;
            cout << "Insert at Position..." << endl;
            cin >> position;
            l1.position(data, position);
            break;

        case 4:
            cout << "List: ";
            l1.FetchAllNodes();
            break;

        case 0:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice. Try again." << endl;
        }

    } while (choice != 0);

    return 0;
}
