#include <iostream>
using namespace std;

int main()
 {

    int number;

    cout << "Enter any number: ";
    cin >> number;

    if (number < 0) 
    {
        cout << "This number is Negative" << endl;
    }
    else if (number == 0)
    {
        cout << "This number is Neutral" << endl;
    }
    else 
    {
        cout << "This number is Positive" << endl;
    }

}
