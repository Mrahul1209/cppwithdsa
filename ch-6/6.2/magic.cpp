#include <iostream>
using namespace std;

main()

{
    int n,rem,sum=0,mul=1;

    cout << "enter your Number :";
    cin>>n;



    while(n!=0)
    {
        rem=n%10;
        sum+=rem;
        mul*=rem;
        n=n/10;
    }

    if(sum==mul)
    {
        cout << "it magic number";
    }
    else
    {
        cout << "it not magic number";
    }
}