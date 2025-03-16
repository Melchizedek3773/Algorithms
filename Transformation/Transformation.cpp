#include <algorithm>
#include<iostream>
#include<vector>
int Transformation(int n, std::vector<int>& v)
{
    int t = 0;
    for (int i = 1, s = 0; i < n; i++, s = 0)
    {
        for (int j = 0; j < n; j++)
            if (v[j] == i)
                s++;
        //std::cout << s;
        t = (s < t) ? t : s;
    }
    //std::cout << t << '\n';
    if (t == n)
        return n;
    if (t == n/2 && n % 2 != 0)
        return 1;
    if (t > n/2)
        return t-(n-t);
    return 0;
}
int main()
{
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++)
        std::cin >> v[i];
    std::cout << Transformation(n, v);
    return 0;
}