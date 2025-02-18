#include <iostream>
using namespace std;

double Power(double a, int n)
{
    double result = 1;
    double aInPower2 = a;
    while (n > 0)
    {
        if (n & 1 == 1)
            result = result * aInPower2;
        aInPower2 *= aInPower2;
        n << 1;
    }
    return result;
}
int main()
{
    cout << Power(8,3);
    return 0;
}