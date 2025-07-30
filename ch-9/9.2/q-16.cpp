#include <iostream>
using namespace std;

int main()

{
    char i, j, s;

    for(i = 'A'; i <= 'E'; i++)
    {
        for(s = 'A'; s < i; s++)
        {
            cout << " "; 
        }

        for(j = i; j <= 'E'; j++)
        {
            cout << j;
        }

        cout << endl;

    }
}