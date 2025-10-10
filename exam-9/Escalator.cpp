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
            cout << "Stack is Empty..." <<endl;
        }
        else
        {
            this-> top--;
            this->len--;
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

   
};

