#include <iostream>
#define MAX 100
using namespace std;



class Stack
{
private:
    int *arr;
    int top;
    int capacity;

public:
    Stack(int size)
    {
        this->capacity = size;
        this->arr = new int[capacity];
        this->top = -1;
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


};


int main()

{
    Stack s(MAX);

    int num;

    cout << "enter your Number :";
    cin >> num;

    while (num != 0)
    {
        
        s.push(num % 2);

        num=num/2;
    }

    cout << "Decimal to Binary :";
    s.display();
}