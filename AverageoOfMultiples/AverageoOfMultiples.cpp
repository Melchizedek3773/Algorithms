#include<iostream>
void AverageOfMultiples(int* p, int n, int k)
{
    int l = 1, size = 1;
    for (int i = 0; i <= n; i++)
        if (p[i] % k == 0)
            size++;
    int* arr = new int[size];
    
    for (int i = 0; i < n; i++)
    {
        if (p[i] % k == 0)
        {
            arr[l] = p[i];
            ++l;
        }
    }
    
    int sum = 0;
    for (int i = 1; i < size; i++)
        sum += arr[i];
    *arr = sum / (size-1);
    
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
}
int main()
{
    int n = 51;
    int* p = new int[n];
    for (int i = 1; i < n; i++)
        p[i] = i; // Массив с 50 элементами.
    int k = 0;
    std::cin >> k;
    AverageOfMultiples(p, n, k);
    return 0;
}
