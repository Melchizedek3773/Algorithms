#include <iostream>

void RemoveLessTwo(double* p, int n)
{
    // Размер массива без мусора.
    int l = 0;
    for (int i = 0; i < n; i++)
        if (p[i] > 2)
            l++;
    // Массив без мусора.
    double* t = new double[l];
    int z = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i] > 2)
        {
            t[z] = p[i];
            ++z;
        }
    }
    for (int i = 0; i < l; i++)
        std::cout << t[i] << " ";
    delete[] t;
}
int main()
{
    // Массив.
    int n = 0;
    std::cin >> n;
    double* p = new double[n];
    for (int i = 0; i < n; i++)
        std::cin >> p[i];
    RemoveLessTwo(p, n);
    delete[] p;
    return 0;
}