#include <iostream>
using namespace std;

int main()

{
    int i, j, s;

    for(i = 5; i >= 1; i--)
    {
        for(s = 5; s > i; s--)
        {
            cout << " "; 
        }

        for(j = i; j >= 1; j--)
        {
           if(i%2!=0)
           {
                cout << "1";           
           }
           else
           {
                cout << "0";
           }
        }

        cout << endl;

    }
}