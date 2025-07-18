#include <iostream>
using namespace std;

main()

{
    int n;

    cout << "enter your Number :";
    cin>>n;

    int rem;
    int reverse=0;

    int k=n;

    while(n!=0)
    {
        rem=n%10;

        reverse=reverse*10+rem;

        n=n/10;

    }



    if(k==reverse)
    {
        cout << "it palindrom Number" << endl;
    }
    else
    {
        cout << "it Not palindrom Number" << endl;
    }
    

}
    
