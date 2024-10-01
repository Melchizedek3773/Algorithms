#include <iostream>
using namespace std;

int FactorialZeros(int n)
{
    if (n == 0 || n == 1)
        return 0;

    int zeros = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
            zeros++;
        if (i % 25 == 0)
            zeros++;
        if (i % 125 == 0)
            zeros++;
        if (i % 625 == 0)
            zeros++;
    }
    return zeros;
}

int main(int n){cin >> n; cout << FactorialZeros(n); return 0;}