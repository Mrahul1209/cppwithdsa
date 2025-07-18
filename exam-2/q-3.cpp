#include <iostream>
using namespace std;

main()

{
    int n,sum=0;

    cout  << "Enter your Number :";
    cin>>n;

    while(n > 0 || sum >= 10)
    {
        if(n==0)
        {
            n=sum;
            sum=0;

        }
        sum+=n%10;
        n=n/10;
    }
    cout <<"The Number Of Final :"<< sum <<endl;
}