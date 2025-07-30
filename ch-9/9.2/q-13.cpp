#include <iostream>
using namespace std;

int main()

{
    char i, j, s;

    for(i = 'A'; i <= 'E'; i++)
    {
        for(s = 'E'; s > i; s--)
        {
            cout << " "; 
        }

        for(j = i; j >= 'A'; j--)
        {
            cout << j;
        }

        cout << endl;

    }
}