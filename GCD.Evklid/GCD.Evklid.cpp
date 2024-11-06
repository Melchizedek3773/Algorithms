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

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << GCD(a, b);
    return 0;
}