#include <iostream>
using namespace std;

main()

{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout << j;
        }
        cout << endl;
    }
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout << j;
        }
        cout << endl;
    }
    
}