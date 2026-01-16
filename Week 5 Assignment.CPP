#include <iostream>
using namespace std;

// The function that returns a reference to the largest fraction
double& largestFraction(double& a, double& b, double& c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main()
{
    double f1 = 3.0 / 8.0;
    double f2 = 5.2 / 6.0;
    double f3 = 2.0 / 3.5;

    double& largest = largestFraction(f1, f2, f3);

    cout << "Largest fraction is: " << largest << endl;

    return 0;
}
