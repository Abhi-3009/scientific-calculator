#include <iostream>
#include <cmath>

using namespace std;

double squareRoot(double n);
long factorial(int n);
double natural_log(double n);
double power(double b, int e);

int tests_run = 0;
int tests_passed = 0;

void check(bool condition, string name)
{
    tests_run++;

    if(condition)
    {
        tests_passed++;
        cout << "[PASS] " << name << endl;
    }
    else
    {
        cout << "[FAIL] " << name << endl;
    }
}

int main()
{
    cout << "\nRunning Calculator Tests\n\n";

    check(squareRoot(25) == 5, "sqrt(25)");
    check(squareRoot(0) == 0, "sqrt(0)");
    check(squareRoot(1) == 1, "sqrt(1)");
    check(squareRoot(0.25) == 0.5, "sqrt(0.25)");
    check(isnan(squareRoot(-4)), "sqrt(-4)");

    check(factorial(5) == 120, "factorial(5)");
    check(factorial(1) == 1, "factorial(1)");
    check(factorial(0) == 1, "factorial(0)");
    check(factorial(10) == 3628800, "factorial(10)");
    check(factorial(-3) == -1, "factorial(-3)");

    check(round(natural_log(1)) == 0, "log(1)");
    check(round(natural_log(2.71828)) == 1, "log(e)");
    check(isnan(natural_log(0)), "log(0)");
    check(isnan(natural_log(-5)), "log(-5)");

    check(power(2,3) == 8, "2^3");
    check(power(5,0) == 1, "5^0");
    check(power(0,5) == 0, "0^5");
    check(power(-2,3) == -8, "(-2)^3");
    check(power(-2,2) == 4, "(-2)^2");

    cout << "\n=============================\n";
    cout << "Total Tests Run : " << tests_run << endl;
    cout << "Tests Passed    : " << tests_passed << endl;
    cout << "Tests Failed    : " << tests_run - tests_passed << endl;
    cout << "=============================\n";

    return 0;
}
