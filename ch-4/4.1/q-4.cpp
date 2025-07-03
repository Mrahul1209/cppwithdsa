#include <iostream>
using namespace std;

main()

{
    int x,y,ans;

    cout << "enter first number :";
    cin >>x;

    cout << "enter second number :";
    cin >>y;

    ans = (x*x)-(2*x*y)+(y*y);

    cout << "ans :" << ans << endl;


}