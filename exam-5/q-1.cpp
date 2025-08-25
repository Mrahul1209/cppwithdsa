#include <iostream>
using namespace std;

int main() 
{
    char str[100];
    char* ptr = str;
    int len = 0;

    cout << "Enter any string: ";
    cin.getline(str, 100);

    while (*ptr != '\0') 
    {
        ptr++;
        len++;
    }

    cout << "The length of the string is " << len << endl;

}
