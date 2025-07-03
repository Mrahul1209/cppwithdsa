#include <iostream>
using namespace std;

main()

{
    int x,y,ans;

    cout << "enter first number :";
    cin >>x;

    cout << "enter second number :";
    cin >>y;


    ans = (x*x*x)-(3*x*x*y)+(3*x*y*y)-(y*y*y);

    cout << "ans :" << ans << endl;


}