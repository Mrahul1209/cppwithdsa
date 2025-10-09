#include <iostream>
using namespace std;

class Node
{

public:

int data;
Node *next;
  
};



int main()
{

    Node *HEAD = new Node();
    HEAD->data=12;
    HEAD->next=nullptr;

    Node *Current = new Node();
    Current->data=9;
    Current->next=nullptr;
    HEAD->next=Current;

    Current = new Node();
    Current->data=45;
    Current->next=nullptr;
    HEAD->next->next=Current;

    Current = new Node();
    Current->data=30;
    Current->next=nullptr;
    HEAD->next->next->next=Current;


    Node *ptr=HEAD;

    while (ptr != NULL)
    {
       cout << ptr->data << endl;
       ptr=ptr->next;
    }
    
   
}
