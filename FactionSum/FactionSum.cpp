#include <iostream>
using namespace std;

void FactionSum(int a, int b, int c, int d)
{
    a *= d;
    c *= b;
    int m = a + c;
    int n = b*d;

    int j = 2;
    while (j <= n)
    {
        if (m % j == 0 && n % j == 0)
        {
            m /= j;
            n /= j;
        }
        else j++;
    }
    cout << m << " " << n;
}

int main(int a, int b, int c, int d)
{
    cin >> a >> b >> c >> d;
    FactionSum(a, b, c, d);
    return 0;
}