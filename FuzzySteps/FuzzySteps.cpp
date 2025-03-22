#include <vector>
#include<iostream>
double max(double v, double x)
{
    return v > x ? v : x;
};
double min(double v, double x)
{
    return v > x ? v : x;
}
double* min(double* a, double* b)
{
    double* buff = new double[21];
    for (int i = 0; i < 21; i++)
        a[i] > b[i] ? buff[i] = a[i] : buff[i] = b[i];
    return buff;
}

int main()
{
    double* buff;
    double* a;
    double* b;
    
    for (int i = 0; i < 21; i++)
        std::cout << buff[i] << " ";
    return 0;
}
