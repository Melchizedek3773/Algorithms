#include <iostream>
using namespace std;

int Fibonacci(int n){
    if (n ==0 || n==1)
        return 1;
    return Fibonacci(n-1) + Fibonacci(n-2);
}
int Fibonacci2(int n)
{
    if (n ==0) return 0;

    int prev = 1; // F(0)
    int current = 1; // F(1)
    for (int i = 2; i <= n; i++)
    {
        int temp = current;
        current += prev; // Вычисляем F(i)
        prev = temp; // Запоминаем F(i-1)
    }
    return current;
}

int main(){cout << Fibonacci2(10); return 0;}