#include <iostream>
#include <cmath>
using namespace std;

double squareRoot(double n) {
    if (n<0) {
        cout << "Error: Square root of negative number not allowed\n";
        return NAN;
    }
    return sqrt(n);
}

long factorial(int n) {
    if (n<0) {
        cout<<"Error: Factorial of negative number not defined\n";
        return -1;
    }
    long result = 1;
    for(int i=1; i<=n; i++)
        result *= i;
    return result;
}

double natural_log(double n) {
    if (n<=0) {
        cout<<"Error: Log undefined for non-positive numbers\n";
        return NAN;
    }
    return log(n);
}

double power(double b, int e) {
    return pow(b,e);
}

int main() {
    while(true) {
        double num1;
        int choice;
    
        cout<< string(35, '-')<< endl;
        cout<< "=== Scientific Calculator ==="<< endl;
        cout<< string(35, '-')<< endl;
        cout<< "Choose an operation:"<< endl;
        cout<< "1. Square Root"<< endl;
        cout<< "2. Factorial"<< endl;
        cout<< "3. Natural Logarithm"<< endl;
        cout<< "4. Power"<< endl;
        cout<< "5. Exit"<< endl;
        cout<< string(35, '-')<< endl;
        cout<< "Enter your choice: ";
        cin >> choice;
        double result;
    
        switch(choice)
        {
            case 1:
                cout << "Enter a number: ";
                cin >> num1;
                result = squareRoot(num1);
                cout << "\nResult: " << result << endl;
                break;
            case 2:
                cout << "Enter a number: ";
                cin >> num1;
                result = factorial((int)num1);
                cout << "\nResult: " << result << endl;
                break;
            case 3:
                cout << "Enter a number: ";
                cin >> num1;
                result = natural_log(num1);
                cout << "\nResult: " << result << endl;
                break;
            case 4:
            {
                double base;
                int exponent;
                cout << "Enter base: ";
                cin >> base;
                cout << "Enter exponent: ";
                cin >> exponent;
                result = power(base, exponent);
                cout << "\nResult: " << result << endl;
                break;
            }
            case 5:
                cout << "\nExiting Scientific Calculator...\n" << endl;
                return 0;
            default:
                cout << "\nInvalid choice!" << endl;
        }
        cout << endl;
    }

    return 0;
}