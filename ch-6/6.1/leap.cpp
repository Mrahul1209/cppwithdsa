#include <iostream>
using namespace std;


main()
{
        int first ,second;
        
        cout << "enter your first and second year :";
        cin>>first>>second;

        while (first<=second)
        {
                if((first%4==0 && first%100!=0)||(first%400==0))
                {
                        cout << first << endl;
                }
                 first++;
        }
        

        


} 
