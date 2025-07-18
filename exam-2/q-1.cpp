#include <iostream>
using namespace std;

int main()
 {
    int n;
    cout << "Enter number of terms:";
    cin >> n;

    int i,r=1;

    for (i = 1; i <= n; i++)
    {
        cout << r <<endl;
        r +=i;
    }
}
