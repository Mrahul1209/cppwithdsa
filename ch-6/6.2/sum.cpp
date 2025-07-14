#include <iostream>
using namespace std;

main()

{
    int n;

    cout << "enter your number :";
    cin>>n;

    int a=1;
   int sum=0;

    while(a<=n)
    {
        sum+=a;
        a++;
    }
    cout<< "sum :"<<sum << endl;
}