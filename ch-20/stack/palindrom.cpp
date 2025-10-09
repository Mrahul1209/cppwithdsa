#include <iostream>
#define MAX 100
#include <string>
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

     int pop()
    {
        if (this->top == -1)
        {
            cout << "Stack is underflow" << endl;
            return ' ';
        }
        else
        {
            return arr[top--];
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

    bool ispalindrom(string str)
    {
        for(char ch : str)
        {
            this->push(ch);
        }

        for(char ch :  str)
        {
            if(ch != pop())
            {
                return false;
            }
        }
        return true;
    }
};

int main()

{
    Stack s(MAX);
    

    char str[100];

    cout << "enter your string :";
    cin >> str;

    if(s.ispalindrom(str))
    {
        cout << "is Palindrom" << endl;
    }
    else
    {
        cout << "is Not palindrom" << endl;
    }


}