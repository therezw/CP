#include <iostream>
using namespace std;

int main()
{
    char bib;
    float num1, num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> bib;

    cout << "Enter two number: ";
    cin >> num1 >> num2;
    
    switch (bib) 
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1+num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1-num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1*num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1/num2;
            break;
        default:
        	
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! operator is not correct";
            break;
    }
    
    return 0;
}