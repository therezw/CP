#include <iostream>

using namespace std;
int main() 
{
    int add;
    cout << "Enter an integer: ";
    cin >> add;

    if ( add > 0)
    {
        cout << "You entered a positive integer: " << add << endl;
        cout<< ":))))))))";
    }
    else if (add < 0)
    {
        cout<<"You entered a negative integer: " << add << endl;
        cout<< ":((((((((";
    }
    else
    {
        cout << "You entered 0." << endl;
        cout << ":///////";
    }
}