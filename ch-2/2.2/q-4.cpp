#include <iostream>
using namespace std;

main()

{
    int principal,rate,time,interest;

    cout << "enter your principal amount :";
    cin >> principal;

    cout << "enter your rate :";
    cin >> rate;

    cout << "enter your time  :";
    cin >> time;

    interest = ( principal*rate*time)/100;

    cout << "simple interest  :" << interest << endl;
}