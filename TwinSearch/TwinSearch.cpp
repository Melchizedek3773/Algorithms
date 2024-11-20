// 1 2 3 4 5 6 7 8 k = 2
// l     m       h
// l m   h
// m h
//   l

//  10  20  30  k = 15
//  l   m   h
//  m   h
//      l
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
    return low;
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
