#include <iostream>
void push_back(int* p)
{
    int n = sizeof(*p);
    int* temp = new int[n*2];
    for (int i = 0; i < n; i++)
        *(temp + i) = *(p + i);
    delete[] p;
    p = temp;
}

int main()
{
    int n = 10;
    int* p = new int[n];
    for (int i = 0; i < n; i++)
        *(p+i) = i;
    
    push_back(p);
    for (int i = 0; i < n; i++)
        std::cout << *(p + i) << '\n';
    return 0;
}
