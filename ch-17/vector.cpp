#include <iostream>
#include <vector>
using namespace std;

int main()
{

    cout << "hello";

    vector<int> v1;

    vector<int> v2(5, 2);
    cout << v2[0]<<endl;
    cout << v2[1]<<endl;
    cout << v2[2]<<endl;
    cout << v2[3]<<endl;
    cout << v2[4]<<endl<<endl;

    vector <int> v3 {12,13,14,15,16};
      cout << v3[0]<<endl;
      cout << v3[1]<<endl;
      cout << v3[2]<<endl;
      cout << v3[3]<<endl;
      cout << v3[4]<<endl;


    return 0;
}
