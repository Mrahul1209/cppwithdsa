#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int top;
    int capacity;
    int len;

public:
    Stack(int size)
    {
        this->capacity = size;
        this->arr = new int[capacity];
        this->top = -1;
        this->len = 0;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(int element)
    {
        if (top == capacity - 1)
        {
            cout << "Stack is overflow" << endl;
        }
        else
        {   
            this->top++;
            this->arr[this->top] = element;
            len++;
        }
    }

    void pop()
    {
        if (this->top == -1)
        {
            cout << "Stack is underflow" << endl;
        }
        else
        {
            this-> top--;
            this->len--;
        }
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Peek: " << arr[top] << endl;
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == capacity - 1;
    }

    void printSize()
    {
        cout << "Current size: " << len << endl;
    }
};

int main()
{
    int size;
    cout << "Enter your stack size: ";
    cin >> size;

    Stack s(size);
    int choice;
    int element;

    do
    {
        cout << endl << "----- Menu -----" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. isEmpty" << endl;
        cout << "6. isFull" << endl;
        cout << "7. Size" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter element to push: ";
            cin >> element;
            s.push(element);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.peek();
            break;
        case 4:
            s.display();
            break;
        case 5:
            cout << (s.isEmpty() ? "Stack is empty" : "Stack is not empty") << endl;
            break;
        case 6:
            cout << (s.isFull() ? "Stack is full" : "Stack is not full") << endl;
            break;
        case 7:
            s.printSize();
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 0);

    return 0;
}
