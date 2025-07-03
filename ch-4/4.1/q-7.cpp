#include <iostream>
using namespace std;

main()

{
    int x,y,z,ans;

    cout << "enter first number :";
    cin >>x;

    cout << "enter second number :";
    cin >>y;

     cout << "enter third number :";
    cin >>z;

    ans = (x*x)+(y*y)+(z*z)+(2*x*y)+(2*y*z)+(2*z*x);

    cout << "ans :" << ans << endl;


}