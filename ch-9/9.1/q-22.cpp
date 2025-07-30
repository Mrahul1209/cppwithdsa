#include <iostream>
using namespace std;

main()

{
    char i,j,ch='A';

    for(i='A';i<='E';i++)
    {
        for(j='A';j<=i;j++)
        {
           cout << ch << "";  
           ch++;      
        }
        cout << endl;
    }
}