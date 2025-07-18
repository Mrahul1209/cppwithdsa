#include <iostream>
using namespace std;

main()

{

  int n, count = 0, rem, sum = 0;
  
  cout << "Enter Any Number : ";
  cin >> n;
  
  int k = n;
  
  while(n != 0)
  {
    count++;
    n = n / 10;
  }
  
  n = k;
  
  for(int i = count; i >= 1; i--)
  {
    rem = n % 10;
    int p = 1;
      for(int j = 1; j <= i; j++)
        p *= rem;
    sum += p;
    n = n / 10;
  }
  
  if(k == sum)
    cout << "This number is a Disarium Number";
  else
    cout << "This is Not a Disarium Number";
}