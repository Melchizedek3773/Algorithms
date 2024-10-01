#include <iostream>
using namespace std;

bool IsPrime(int n)
{
    if (n <= 1)
        return false;
    for (int k = 2; k < n; ++k)
    {
        if (n % k == 0) 
            return false;
    }
    return true;
}
bool IsPrime2(int n)
{
    if (n == 1) return false;

    for (int k = 2; k * k <= n; ++k)
    {
        if (n % k == 0)
            return false;
    }
    return true;
}
int main()
{
    cout << IsPrime2(16769023) << '\n'; return 0;
}