#include <iostream>
using namespace std;

main()

{
    int i,j,s;

    for(i=1;i<=7;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1 || i==4 || j==1 || j==5)
            {
                cout << "A";
            }
            else
            {
                cout << " ";
            }
        }
            cout << endl;
    }
         
}    

