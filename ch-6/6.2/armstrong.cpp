#include <iostream>
using namespace std;

main()

{


    int n,rem,sum=0,mul,arm;
	cout << "enter your number:";
	cin>>n;
	arm=n;
	while(n!=0)
	{
	   rem=n%10;
	   mul=rem*rem*rem;
	   sum+=mul;
	   n=n/10;
	}
	if(arm==sum)
	{
		cout <<"it armstron number";
	}
	else
	{
		cout << "it not armstron number";
    }

}
