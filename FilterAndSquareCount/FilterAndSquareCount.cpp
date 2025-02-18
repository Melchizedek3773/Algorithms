#include <iostream>
void FilterAndSquareCount(int* p)
{
    int l = 0, count = 0;
    for (int i = 0; i < 20; i++)
        if (p[i] < 0)
        {
            l = i;
            break;
        }
    if (l == 0 || l == 20)
        return;
    int size = 20 - l;
    int* p2 = new int[size+1];
    for (int i = 0; i < size; i++)
        p2[i] = p[l+i];
    delete[] p;

    int j = 3;
    for (int i = 0; i < size; i++)
        while (j*j <= p2[i])
        {
            if (p2[i] % j*j == 0 & j % 2 != 0)
            {
                count++;
                ++j;
            }
            else ++j;
        }
    
    p2[size] = count;
    for (int i = 0; i <= size; i++)
        std::cout << p2[i] << " ";
    delete[] p2;
}
int main()
{
    int* p = new int[20];
    std::cout << "Enter the number of elements: 1 2 3 ... 20" << '\n';
    for (int i = 0; i < 20; i++)
        std::cin >> p[i];
    FilterAndSquareCount(p);
    return 0;
}
