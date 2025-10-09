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
    HEAD->data = 12;
    HEAD->next = nullptr;

    Node *n2 = new Node();
    n2->data = 30;
    n2->next = nullptr;

    HEAD->next = n2;
    
    Node *n3 = new Node();
    n3->data = 90;
    n3->next = nullptr;

    n2->next = n3; 

    Node *n4 = new Node();
    n4->data = 50;
    n4->next = nullptr;

    n3->next = n4; 

   
    cout << "HEAD data: " << HEAD->data << "Addres of :" << HEAD->next<<endl;
    cout << "n2 data: " << n2->data << "Addres of :" << n2->next<<endl;
    cout << "n3 data: " << n3->data << "Addres of :" << n3->next<<endl;
    cout << "n4 data: " << n4->data << "Addres of :" << n4->next<<endl;
   
   
   
    return 0;
}

