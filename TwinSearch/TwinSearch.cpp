#include <iostream>
int Lower_Bound(int* p, int n, int k)
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
    int result = (p[low] - k == k - p[low - 1] || p[low] - k > k - p[low-1] && low != 0 && low != n) ? low-1 : low;
    return result;
}

int main()
{
    int n, m = 0;
    std::cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    
    std::cin >> m;
    int* b = new int[m];
    for (int i = 0; i < m; i++)
        std::cin >> b[i];
    
    for (int i = 0; i < m; i++)
        std::cout << Lower_Bound(a, n, b[i]) << " ";
    return 0;
}