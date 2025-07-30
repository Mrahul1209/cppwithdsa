#include <iostream>
using namespace std;

main()

{
    int i,j;

    for(i=5;i>=1;i--)
    {
        for(j=i;j<=5;j++)
        {
            if(j%2!=0)
            {
                cout << "-" << "";
            }
            else
            {
                cout << "|" << "";
            }
        }
        cout << endl;
    }
}