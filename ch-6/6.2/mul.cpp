#include <iostream>
using namespace std;

main()

{
        int n;

        cout <<"enter your number :";
        cin>>n;

        int a=1;
        int mul=1;


        while (a<=n)
        {
            mul*=a;
            a++;
        }
        cout << "multiplication :" << mul << endl;


        
}