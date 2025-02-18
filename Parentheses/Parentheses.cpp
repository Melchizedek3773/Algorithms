#include <iostream>
int main()
{
    std::string str;
    std::cin >> str;
    int len = 0;
    while (len != str.length())
        std::cout << str.at(len++) << '\n';
    return 0;
}
