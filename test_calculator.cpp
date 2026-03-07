#include <cassert>
#include <cmath>
#include <iostream>
using namespace std;

double squareRoot(double n){
    if (n < 0)
        throw invalid_argument("negative");
    return sqrt(n);
}

long factorial(int n){
    if (n < 0)
        throw invalid_argument("negative");
    long r = 1;
    for (int i = 1; i <= n; i++)
        r *= i;
    return r;
}

double natural_log(double n){
    if (n <= 0)
        throw invalid_argument("invalid");
    return log(n);
}

double power(double b, int e){
    return pow(b, e);
}

int main()
{
    // square root tests
    assert(squareRoot(9) == 3);
    assert(squareRoot(16) == 4);

    // factorial tests
    assert(factorial(5) == 120);
    assert(factorial(0) == 1);

    // log tests
    assert(abs(natural_log(1)) < 0.0001);

    // power tests
    assert(power(2, 3) == 8);
    assert(power(5, 0) == 1);

    cout << "All tests passed\n";
}