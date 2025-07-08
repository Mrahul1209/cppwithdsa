#include <iostream>
using namespace std;

main()


{
        float grade;

        cout << "enter your mark :";
        cin>>grade;

        if(grade>=91 && grade<=100)
        {
            cout << "grade is A1:" << grade << endl;
        }
        else if(grade>= 81 && grade<=90)
        {
             cout << "grade is A2 :" << grade << endl;
        }
        else if(grade>= 71 && grade<=80)
        {
             cout << "grade is B1 :" << grade << endl;
        }
        else if(grade>= 61 && grade<=70)
        {
             cout << "grade is B2 :" << grade << endl;
        }
        else if(grade>= 51 && grade<=60)
        {
             cout << "grade is c1 :" << grade << endl;
        }
        else if(grade>= 41 && grade<=50)
        {
             cout << "grade is c2 :" << grade << endl;
        }
        else if(grade>= 33 && grade<=40)
        {
             cout << "grade is d :" << grade << endl;
        }
        else
        {
            cout << "your are fail" << endl;
        }
        
        
}
