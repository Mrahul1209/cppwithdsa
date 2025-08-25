#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int size;
    cout << "Enter number of doors: ";
    cin >> size;

    int open = 0;

    for (int i = 1; i <= size; i++)
    {
        int root = sqrt(i);
        if (root * root == i)
        {
            open++; // perfect squares will be open
        }
    }

    int close = size - open;

    cout << "Open Doors = " << open << endl;
    cout << "Close Doors = " << close << endl;

    return 0;
}
