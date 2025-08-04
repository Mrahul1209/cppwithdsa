#include <iostream>
using namespace std;
main() {

    int i,j,s;

    for(i = 6; i >= 1; i--) 
    {
        for(s = 1; s < i; s++)
        {
             cout << " "; 
        }
         for(j = 6; j >= i; j--) 
         {
             cout << "*";
         }
        for (j = i + 1; j <= 6; j++) 
        {
             cout << "*";
        }
          cout << endl; 
        } 

        for(i = 5; i >= 1; i--)

         {
            for(s = 6; s > i; s--)
             {
                cout << " ";
             }
             for(j = i; j >= 1; j--)
            { 
                cout << "*";
            } 
            for(j = 2; j <= i; j++) 
            {
                cout << "*"; 
            }
            cout << endl;
         }
    }
