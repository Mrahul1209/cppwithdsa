#include <iostream>
using namespace std;

class MyQueue
{
public:
    virtual void Enqueue(int element) = 0;
    virtual void Dequeue() = 0;
    virtual void Front() = 0;
    virtual void Rear() = 0;
    virtual void Display() = 0;
    virtual void IsEmpty() = 0;
    virtual void Isfull() = 0;
    virtual int size() = 0;
};

class Queue : public MyQueue
{
private:
    int *arr;
    int capacity;
    int front;
    int rear;
    int count;

public:
    Queue(int capicity)
    {
        this->arr = new int[capacity];
        this->capacity = capacity;
        this->front = -1;
        this->rear = -1;
        this->count = 0;
    }

    ~Queue()
    {
        delete[] arr;
    }

    void Enqueue(int element)
    {
        if (this->rear == this->capacity - 1)
        {
            cout << "Queue is Overflow...!!" << endl;
        }
        else if (this->front == -1 && this->rear == -1)
        {
            this->front = 0;
            this->rear = 0;
            this->arr[this->rear] = element;
            this->count++;
        }
        else
        {
            this->rear++;
            this->arr[this->rear] = element;
            this->count++;
        }
    }
    void Dequeue()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << "Queue is Underflow...!!" << endl;
        }
        else if (this->front == this->rear)
        {
            this->front = -1;
            this->rear = -1;
            this->count--;
        }
        else
        {
            this->front++;
            this->count--;
        }
    }
    void Front()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << "Queue is Empty..." << endl;
        }
        else
        {
            cout << " front :" << this->arr[this->front] << endl;
        }
    }
    void Rear()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << "Queue is Empty..." << endl;
        }
        else
        {
            cout << " Rear :" << this->arr[this->rear] << endl;
        }
    }
    void Display()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << "Queue is Empty..." << endl;
        }
        else
        {
            for (int i = this->front; i <= this->rear; i++)
            {
                cout << this->arr[i] << " ";
            }
            cout << endl;
        }
    }

    void IsEmpty()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << "Queue is Empty..." << endl;
        }
        else
        {
            cout << "Queue is Not Empty...." << endl;
        }
    }

    void Isfull()
    {
        if (this->rear == this->capacity - 1)
        {
            cout << "Queue is full..." << endl;
        }

        else
        {
            cout << "Queue is not full..." << endl;
        }
    }

    int size()
    {
        return this->count;
    }
};

int main()

{
    int size;

    cout << "enter your size:";
    cin >> size;

    Queue q1(size);

    int choice;
    int element;

    do
    {

        cout << endl
             << ".....!! Menu !! ... " << endl;

        cout << "press 1 for Enqueue :" << endl;
        cout << "press 2 for Dequeue :" << endl;
        cout << "press 3 for Front :" << endl;
        cout << "press 4 for Rear :" << endl;
        cout << "press 5 for Display :" << endl;
        cout << "press 6 for IsEmpty :" << endl;
        cout << "press 7 for Isfull :" << endl;
        cout << "press 8 for Size :" << endl;
        cout << "press 0 for Exit:" << endl;

        cout << " enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "enter your Elements :";
            cin >> element;
            q1.Enqueue(element);
            break;
        case 2:
            q1.Dequeue();
            break;
        case 3:
            q1.Front();
            break;
        case 4:
            q1.Rear();
            break;
        case 5:
            q1.Display();
            break;
        case 6:
            q1.IsEmpty();
            break;
        case 7:
            q1.Isfull();
            break;
        case 8:
            cout << "Size of Queue: " << q1.size() << endl;
            break;
        case 0:
            cout << "Exiting.......!!!!" << endl;
            break;

        default:
            cout << "Invalid Choice please Try Again.....!!!" << endl;
            break;
        }
    } while (choice != 0);
}