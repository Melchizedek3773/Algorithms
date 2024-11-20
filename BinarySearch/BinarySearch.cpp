#include <iostream>
int BinarySearch(int* p, int n, int k)
{
    int low = 0;
    int high = n-1;
    while (low < high)
    {
        int mid = (low+high)/2;
        if (p[mid] < k)
            low = mid + 1;
        else
            high = mid;
    }
    return (low == n || p[low] != k) ? -1 : low;
    
}

int main()
{
    int n = 0;
    std::cin >> n;
    int* p = new int[n];
    for (int i = 0; i < n; ++i)
        std::cin >> p[i];
    int k = 0;
    std::cin >> k;
    std::cout << BinarySearch(p, n, k);
    return 0;
}
