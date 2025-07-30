#include <iostream>
using namespace std;

main()

{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            if(j%2!=0)
            {
                cout << 1 << "";
            }
            else
            {
                cout << 0 << "";
            }
        }
        cout << endl;
    }
}