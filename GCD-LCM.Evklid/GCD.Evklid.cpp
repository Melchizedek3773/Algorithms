#include <iostream>
int GCD (int a, int b)
{
    while (b != 0)
    {
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int LCM (int a, int b)
{
    // Warning! Overflow.
    return a*b/GCD (a, b);
}

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << LCM(a, b);
    return 0;
}