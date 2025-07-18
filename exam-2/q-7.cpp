#include <iostream>
using namespace std;

main()

{       
	
	int n,first,last;

	cout <<"enter your number:";
	cin>>n;

	last=n%10;

	while(n > 9)
	{
		n=n/10;
	}
	first=n;

	n = first+last;

	cout << first << " + " << last << " = " << n << endl;



}