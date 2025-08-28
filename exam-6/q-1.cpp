#include <iostream>
using namespace std;

void calculator(int &a, int &b)
 {
    cout << endl <<"Enter First Value: ";
    cin >> a;
    cout << "Enter Second Value: ";
    cin >> b;
}
void add(int a, int b) 
{
    cout << endl <<"Addition of " << a << " and " << b << " is: " << a + b << endl;
}

void sub(int a, int b) 
{
    cout << endl <<"Subtraction of " << a << " and " << b << " is: " << a - b << endl;
}

void mul(int a, int b) 
{
    cout << endl << "Multiplication of " << a << " and " << b << " is: " << a * b << endl;
}

void divi(int a, int b)
 {
    if (b == 0) 
    {
        cout << endl <<"Error: Division by zero is not allowed." << endl;
    } 
    else 
    {
        cout << endl << "Division of " << a << " by " << b << " is: " << (float)a / b << endl;
    }
}

void modul(int a, int b) 
{
    if (b == 0) 
    {
        cout << endl <<"Error: Modulus by zero is not allowed." << endl;
    } 
    else 
    {
        cout << endl <<"Modulus of " << a << " and " << b << " is: " << a % b << endl;
    }
}

void Choice(int ch) {
    int a, b;

    switch (ch) 
    {
        case 1:
            calculator(a, b);
            add(a, b);
            break;
        case 2:
            calculator(a, b);
            sub(a, b);
            break;
        case 3:
            calculator(a, b);
            mul(a, b);
            break;
        case 4:
            calculator(a, b);
            divi(a, b);
            break;
        case 5:
            calculator(a, b);
            modul(a, b);
            break;
        case 0:
            cout << endl <<"Program Exited Successfully!"<< endl;
            break;
        default:
            cout << endl << "Invalid Choice. Please try again." << endl;
    }
}

int main() 
{
    int ch = -1;

    while (ch != 0) 
    {
        cout << endl << " Calculator Program" << endl;
        cout << "1. Add (+)" << endl;
        cout << "2. Subtract (-)" << endl;
        cout << "3. Multiply (*)" << endl;
        cout << "4. Divide (/)" << endl;
        cout << "5. Modulus (%)" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        Choice(ch);
    }

}
