#include <iostream>

int main()
{
    int count = 0;
    std::cin >> count;
    int* arr = new int[count];
    
    for (int i = 0; i < count; i++)
        std::cin >> arr[i];
    
    for (int i = count - 1; i >= 0; i--)
        std::cout << arr[i] << " ";
    
    delete[] arr;
    return 0;
}
