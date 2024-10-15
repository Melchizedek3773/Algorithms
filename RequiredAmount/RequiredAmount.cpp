#include <iostream>
int main()
{
    int n;
    int m;
    int k;
    std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    std::cin >> m;
    int* arr2 = new int[m];
    for (int j = 0; j < m; j++)
        std::cin >> arr2[j];
    std::cin >> k;
    int d = 0;
    for (int i = 0; i <= n; i++)
        for (int j = m - 1; j >= 0; j--)
            if (arr[i] + arr2[j] == k)
                d++;
    std::cout << d << '\n';
    return 0;
}
