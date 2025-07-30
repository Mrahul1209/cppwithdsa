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

        for(j = 'A'; j <= i; j++)
        {
            cout << j;
        }

        cout << endl;

    }
}