#include <iostream>
using namespace std;

void Factorization(long long n) {
    int j = 2;
    while ((long long)j * j <= n) {
        if (n % j == 0) {
            cout << j << " ";
            n /= j;
        }
        else ++j;
    }
    cout << n << endl;
}

int main(int n) {cin >> n; Factorization(n); return 0;}