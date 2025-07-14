#include <iostream>
using namespace std;

main()

{
        int n;

        cout <<"enter your number :";
        cin>>n;

        int a=1;
        int fact=1;


        while (a<=n)
        {
            fact*=a;
            a++;
        }
        cout << "factorial :" << fact << endl;


        
}